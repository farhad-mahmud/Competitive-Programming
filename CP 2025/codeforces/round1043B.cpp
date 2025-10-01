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
             int n ; cin >> n ;



             vector<int > v ;

             for(int i=1;i<=18;i++){

               int f = 1 ;

               for(int j=0;j<i ;j++){ 

                    f *= 10 ;

               }

               f++ ;

                  if(f <=n && n % f == 0){

                      int x = n/ f ;

                      v.push_back(x) ;
                  }



             }


             sort(v.begin(),v.end()) ;

             if(v.empty()){

                 cout << 0 << nl ;
             }
             else{

                  cout << v.size() << nl ;

                    for(auto i : v){

                  cout << i << ' ' ;
                  }
                  
                  cout << nl ;
 
             }

      

}

int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

         cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
