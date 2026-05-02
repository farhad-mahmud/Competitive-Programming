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

const int MOD = 1e9+7;
const int N = 100 ;
const int W = 1e6 ; 
int n,k  , v[W] , dp[N][W];

int f(int i , int cur_val){

      ///cerr << i << nl ;
      if(cur_val > k ) return 0; 
      if(i == n+1){
            if(cur_val == k)return 1 ;
            else return 0  ;
      }

      int &ans = dp[i][cur_val];

      if (ans != -1) return ans ;
      ans = 0 ;

      ans += f(i + 1 , cur_val + v[i]) ;
      
      cerr << ans << ' ' << v[i] << nl;
         if(ans >= MOD){
           ans -= MOD ;
       }
      return ans ;
}

void solve (int cs)
{  
            
            cin >>n >> k ;

            for(int i=1;i<=n;i++){
                  cin >> v[i] ;
            }

            memset(dp , -1 , sizeof dp);

            cout << f(1,0 ) << nl ;
         
}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;

   //cin >> t ;

   int cs = 1 ;
   while (t--) {

      solve(cs) ;

      cs++ ;
   }


   return 0;
}
