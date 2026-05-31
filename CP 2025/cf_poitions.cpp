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

const int N = 2000;
const int W  = 1e9 ;
const int MOD = 1e9 + 7;

int dp[N];
int a[N] ;
int n ;

int sum = 0 ;
int f(int i){
      if(i == n + 1){
          return 0 ;
      }


      // skip it..
      int ans = f(i+1) ;

      // take it..

      if(sum + a[i] >= 0){
           ans = max(ans , f(i+1)+ a[i]) ;
      }

      cerr << ans <<nl ;
     return dp[i] = ans ;
}
void solve ()
{  
       cin >> n ;
        for(int i=1;i<=n;i++)cin >> a[i];

         cout << f(1) << nl;

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
