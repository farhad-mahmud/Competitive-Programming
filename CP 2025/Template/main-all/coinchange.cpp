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

// const int N = 1e9 + 9;
const int MOD = 1e9 + 7;

const int  N = 55 ;

int n ,k , a[N] , c[N], dp[N][1000];

int f(int i, int cur_val){
      if(cur_val > k) return 0 ;
      if(i == n+1 ) {
           if(cur_val == k) return 1 ;
           else return 0 ;
      }

      if(dp[i][cur_val]!= -1) return dp[i][cur_val];
      
      int ans = 0;

      for(int cnt = 0 ;cnt<= c[i] ;cnt++){
            ans += f(i + 1, cur_val+ a[i]*cnt);
      }

      return ans ;
}

void solve ()
{  
          cin >> n >> k ;

          for(int i=1;i<=n;i++){
              cin >> a[i];
          }
          for(int i=1;i<=n;i++){
              cin >> c[i];
          }
          
          memset(dp , -1 , sizeof dp);

         cout << f(1,0) << nl ;
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
