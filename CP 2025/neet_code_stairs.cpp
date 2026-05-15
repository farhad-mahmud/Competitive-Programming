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

const int N = 102 ;
const int MOD = 1e9 + 7;

int dp[N] ;

int n ;
int a[N] ;
int cnt = 0;
int f(int i){
      
    if(i == n+1 || i == n){
       return 0 ;
    }

    if(dp[i] != -1){
       return dp[i] ;
    }

    int ans = min(f(i+1) + a[i] , f(i+2) + a[i]) ;

    return dp[i] = ans ;


}

void solve ()
{  
            cin >> n ;

            for(int i=0;i<n;i++){
                 cin >> a[i] ;
            }

            memset(dp , -1 , sizeof dp) ;


            int ans1 = f(0) ;

            int ans2 = f(1) ;

            cout << min(ans1,ans2) << nl;


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
