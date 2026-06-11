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

const int N = 100 ;

const int MOD = 1e9 + 7;
const int inf = 1e9 + 7 ;

vector<vector<int >> dp ;

int n, m ; 
int f(int i,int j){
      
      if(i > n|| j >m ) {
          return 0 ;
      }
      if(i==n && j==m){
           return 1 ;
      }
      if(dp[i][j] != -1){
          return dp[i][j] ;
      } 
      // go down..
      int ans = f(i+1, j) ;

      ans += f(i, j+1) ;

      cerr << ans << nl;
      return dp[i][j] = ans ;
}
void solve ()
{  
        cin >> n >> m ;

       dp.assign(n+1 , vector<int> (m+1, -1));

       cout << f(1, 1) << nl;
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
