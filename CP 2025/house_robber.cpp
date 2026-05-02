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

const int N = 100 ;
const int W = 400 ;

int a[W];
int dp[N][W] ;
int n ;
int f(int i , int  val ){

      if(i == n+1){
           return 1 ;
      }

      int &ans = dp[i][val] ;
      if(ans != -1) return ans ;

      ans = 0 ;

      ans = f(i+2, val + a[i]) ;

      cerr << ans << nl ;

      return ans; 
}

void solve ()
{  
               cin >>n ;
               for(int i=1;i<=n;i++)cin >> a[i];

               memset(dp, -1 , sizeof dp) ;


               cout << f(1, 0) << nl ;
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
