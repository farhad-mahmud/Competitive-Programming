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
         int h[N];
         int dp[N];
      
         for(int i=1;i<=n;i++){
              cin >> h[i];
         }

         int sum = 0 ;
         for(int i=n;i>=1;i--){           
              if(i==n){
                  dp[i] == 0 ;
              }
              else{
                  //int &ans = dp[i];
                  int ans ;
                  ans = abs(h[i]- h[i+1])+ dp[i+1];
                  if(i+2<=n){
                   ans = min(ans, abs(h[i]-h[i+2]) + dp[i+2]);
                  }
                  dp[i] = ans ;
              }

             // cerr << dp[i] << nl;
         }


         cout << dp[1]  << nl ;
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
