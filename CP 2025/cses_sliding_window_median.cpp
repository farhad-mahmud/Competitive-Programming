
#include <bits/stdc++.h>
using namespace std;

#define int  long long

#define nl       "\n" 

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
#define dbug(x) cerr << (#x) << " is " << (x) << nl;
#define output(a) for(auto &it: a) cerr<<it<<" "; cerr<<nl;
// Constants
const int N = 1e5 + 9;
const int MOD = 1e9 + 7;


void solve ()
{
                  int n , k  ; cin >> n >> k ;

                  vector<int > a(n+1) ;

                  for(int i=1;i<=n;i++) cin >> a[i] ;

                   

                 multiset <int > st ;

                // fix size of window k ;

               auto mid = st.begin() ;

               for(int i=1;i<=n;i++){

               		st.insert(a[i]) ;

               		if(st.size()== 1){
               			 mid = st.begin() ;
               		}
               		else if(a[i]< *mid){

               			 if(st.size() % 2 ==0){
               			 	 mid-- ; // we go left 
               			 }
               		}
               		else {

               			  if(st.size() % 2 ==1){
               			  	    mid++ ;
               			  }
               		}


               		// remove oldest element if st > k ;

               		if(st.size() > k){

               			 int out = a[i-k] ;

               			 if(out <= *mid){

               			 	 if(st.size() % 2 ==1){
               			 	 	 mid++ ;
               			 	 }
               			 }
               			 else {
               			 	  if(st.size() % 2 ==0){
               			 	  	  mid-- ;
               			 	  }
               			 }

               			 st.erase(st.find(out)) ;
               		}

                     // print median when window is ready ;
               		if(st.size() == k){

               			  cout << *mid << ' ' ;
               		}

               		cout << nl; 
               }


          
}

int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

         //cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
