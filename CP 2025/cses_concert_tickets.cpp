#include <bits/stdc++.h>
using namespace std;

#define int  long long

#define nl       "\n" 

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
// Constants
const int N = 1e5 + 9;
const int MOD = 1e9 + 7;

void solve ()
{

                      int n , m ; cin >> n >> m; 
                      
                      vector<int > a(n+1) ;
                         multiset<int > st ;

                      for(int i=1;i<=n;i++){
                            cin >> a[i] ;
                            st.insert(a[i]) ;
                      }

                      vector<int > b(m+1) ;

                      for(int i=1 ;i<=m;i++){

                            cin >> b[i] ;
                      }

                   
                          
                        int i =  1;

                      while(m--){

                           auto it = st.upper_bound(b[i]) ;
                             
                             if(it != st.begin()){
                                  
                                    it-- ;
                                   cout << *it << nl; 

                                   st.erase(it) ;

                             }
                             else {

                                    cout << -1 << nl; 
                             }

                             i++ ;
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
