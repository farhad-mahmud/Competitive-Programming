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

const int N = 100 + 9;

int n , p[100], c[100];

map<double, double> dp[N];

void solve ()
{  
         
          cin >> n ;

         for(int i=0;i<n;i++){
              cin >> c[i];
              cin >> p[i];
         }

         for (int i = 0; i <= n; i++) dp[i].clear();
         dp[0][1.0] = 0.0 ;

         for (int i = 0; i < n; i++) {
         for (auto &[s, pp] : dp[i]) {

            dp[i+1][s] = max(dp[i+1][s] , pp);
            double new_s = (s * (1.0 - p[i]/ 100.0));

            dp[i + 1][new_s] = max(dp[i + 1][new_s], pp + c[i] * s);
        }
    }

         
      double ans = 0.0;
    for (auto &[s, pp] : dp[n]){
         ans = max(ans, pp);
    }

    cout << fixed << setprecision(10) << ans << nl;
}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;

   cin >> t ;

   while (t--) {

      solve() ;

   }


   return 0;
}
