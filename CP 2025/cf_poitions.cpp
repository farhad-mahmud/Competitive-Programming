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

const int N = 2002;
const int W  = 1e9 ;
const int MOD = 1e9 + 7;

int dp[N][N] ;
int a[N] ;
int n ;


int f(int i, int j ){
      if(i > n ){
          return 0 ;
      }

      if(dp[i][j] != -1){
           return dp[i][j] ;
      }
      // skip it..

      int ans  = f(i+1 , j) ;

      
      // take it..

      if(ans + a[i] >=0 ){
            ans = max (ans , f(i+1, j+1) + a[i]) ;
      }

      return dp[i][j] = ans ;

}
void solve ()
{  
        cin >> n ;
        for(int i=0;i<n;i++)cin >> a[i];

         // left to right

         memset(dp, -1 , sizeof dp) ;
        cout << f(0, 0) << nl;

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
