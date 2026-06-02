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

const int N = 2005;
const int W  = 1e9 ;
const int MOD = 1e9 + 7;

int dp[N][N] ;

void solve ()
{  
        int n ; cin >> n ;
        int a[N] ;

        for(int i=0;i<n;i++)cin >> a[i];

        

        for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            dp[i][j] = -1e18; 
            }
        }


        dp[0][0] = 0 ;


        for(int i=0;i<n;i++){
             for(int j=0;j<=i;j++){

                   if(dp[i][j] < 0) continue ;

                   //skip..this el.
                   dp[i+1][j] = max(dp[i+1][j] , dp[i][j]) ;

                   // take it..
                   if(dp[i][j] + a[i] >= 0){
                   dp[i+1][j+1] = max(dp[i+1][j+1] , dp[i][j] + a[i]) ;

                  }

             }
        }

        int ans = 0 ;

        for(int j= n ;j>=0 ;j--){
            if(dp[n][j] >=0){
                  ans = j ;
                  break ;
            }
        }

        cout << ans << nl;
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
