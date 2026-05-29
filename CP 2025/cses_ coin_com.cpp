//---  Bismillahir Rahmanir Rahim ---//


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

// constrains

const int N = 1e6+2; 
const int MOD = 1e9 + 7;
const int INF = 1e9 ;

int dp[N] ;
void solve ()
{     
            int n , x; cin >> n >> x ;

            int c[102] ;

            for(int i=1;i<=n;i++)cin >> c[i] ;

           
            
            for(int i=1;i<=x;i++){
                  dp[i] = 0 ;
            }


            dp[0] = 1  ;

            for(int i=1;i<=x;i++){

                for(int j=1;j<=n;j++){

                   if(i >=c[j] ){
                   dp[i] =  (dp[i] + dp[i-c[j]]) % MOD ;
                   
                    //cerr << i << ' ' << dp[i]  << ' ' << c[j] << nl; 
                   } 

                }
            }

             

             cout << dp[x]  << nl ;



}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;

   //cin >> t ;

   while (t--) {

      solve() ;

   }


   return 0;
}
