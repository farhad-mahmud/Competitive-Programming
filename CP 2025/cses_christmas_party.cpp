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

const int N = 1e6 + 9;
const int MOD = 1e9 + 7;

void solve ()
{  
         int n ; cin >> n ;

         int dp[n+1] ;

         dp[0] = 1;
         dp[1] = 0 ;

         for(int i=2;i<=n;i++){
              dp[i] = ((i-1)*(dp[i-2] % MOD + dp[i-1] % MOD)) % MOD  ;
             // cerr << dp[i] << nl ;
              //cerr << i << nl; 
         }

         cout << dp[n] << nl ;
      
}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;

   // cin >> t ;

   while (t--) {

      solve() ;

   }


   return 0;
}
