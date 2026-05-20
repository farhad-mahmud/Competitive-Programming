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
                int n ; cin >> n;

                vector<int > p(n);

                for(int i=0;i<n;i++) cin >> p[i] ;


                int best = 1e18 ;

              for(int mask=0 ;mask<(1 << n) ;mask++){

                   int a = 0,b = 0 ;

                   for(int k=0;k<n ;k++){

                       if((mask >> k)&1){

                              a+= p[k] ;
                       }
                       else {

                            b += p[k] ;
                       }                    
                   }
                   
                     best = min(best,abs(a-b)) ;
              }
              

            cout << best << nl; 
}

int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

        // cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
