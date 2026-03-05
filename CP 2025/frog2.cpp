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

int n, k , h[N],dp[N];
const int inf = 1e9;

int f(int i){
       if(i > n) return inf ;  // base cases..
       if(i==n) return 0 ;
      int ans = 1e9 ;
     // cerr << i << nl;

      if(dp[i]!= -1){
           ans = dp[i] ;
      }
      else{
      for(int j=1;j<=k;j++){
          //cerr << i << ' ' << j << ' '  << ans << nl;
          if(i+j> n) break ;
         
          
            ans = min(ans,(abs(h[i] - h[i+j]) + f(i+j))) ;
          
          cerr << i << ' ' << j << ' '  << ans << nl;
      }
   }

      dp[i] = ans ;
      return ans ;
}
void solve ()
{  
      cin >> n >> k ;
      for(int i=1;i<=n;i++){
            cin >> h[i];
      }

      memset(dp,-1,sizeof dp);
      cout << f(1) << nl; 
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
