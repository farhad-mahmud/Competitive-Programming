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

const int N = 1005 ;

const int MOD = 1e9 + 7;

char grid[N][N] ;
int dp[N][N] ;
int n ;

int f(int i,int j){
     if(i > n || j > n){
          return 0 ;
     }

     if(i==n && j == n){
          return 1 ;
     }

     if(dp[i][j] != -1){
         return dp[i][j] ;
     }

     int ans = 0 ;
     
     

     if(grid[i+1][j] != '*'){
         ans  += f(i+1 , j)  ;
     }

     if(grid[i][j+1] != '*'){
         ans += f(i, j+1) ;
     }
  

     //cerr << ans << nl;
     return dp[i][j] = ans % MOD ;

}
void solve ()
{  
         cin >> n ;

        for(int i=1;i<=n;i++){
           for(int j=1;j<=n;j++){
                cin >> grid[i][j] ;
           }
        }

        memset(dp, -1 , sizeof dp) ;

        if(grid[1][1] == '*'){
           cout << 0 << nl ;
           return ;
        }
        cout << f(1,1)  % MOD << nl ;



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
