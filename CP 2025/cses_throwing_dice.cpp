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

const int N = 1e5 + 9;
const int MOD = 1e9 + 7;


void solve ()
{  
         int n ; cin >> n ;

         int dp[n+1];
         dp[0] = 1;
         dp[1] = 1 ;
         // dp[2] = 2 ;
         int sum = dp[0] ;
         for(int i=1;i<=n;i++){
              dp[i] = sum ;
              sum+= dp[i] ;
              // cerr << dp[i] << nl ;
              if(i >=6){
              cerr << sum << nl ;
              sum = sum - dp[i-6] ;
             }

         }

         cout << dp[n] << nl  ;

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
