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
const int MOD = 1e9 + 7;

const int N = 105;

int a[N],b[N],c[N] ;
int dp[N][4] ;
int n ;
// j = prev day..

int f(int i, int j){

      if(i == n+1) return 0 ;
      
      if(dp[i][j] != -1) return dp[i][j] ;

      // take rest..
      int ans = 1 + f(i+1 , 0) ;

      // 0 = last day rest 
      // 1 = last day contest..
      // 2 = last day gym..

      if(j != 1 && a[i] != 0 && a[i]!= 2){
            ans = min( ans , f(i+1, 1)) ;
            // take rest or contest..
      }

      if(j!= 2 && a[i] != 0 && a[i]!= 1){
             ans = min(ans, f(i+1, 2)) ;

             // take rest or gym..
      }

      return dp[i][j] = ans  ;
 }

void solve ()
{  
               cin >>n ;
              
               for(int i=1;i<=n;i++){
                    cin >> a[i] ;
               }
               memset(dp, -1 , sizeof dp) ;


               cout << f(1,-3) << nl ;
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
