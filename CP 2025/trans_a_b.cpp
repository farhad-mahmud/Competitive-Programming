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

const int N = 1e9+ 5 ;

const int MOD = 1e9 + 7;
int dp[N] ;

int a, b; 
int f(int cur){

     if(cur > b){
        return 0 ;
     }
     if(cur == b){

     }

     if(dp[i] != -1){
         return dp[i] ;
     }

     int ans = f(cur*2) ;

     ans = ans + f(cur*10 + 1) ;

     return dp[i] = ans ;


}
void solve ()
{  
        cin >> a >> b ;

        memset(dp , -1 , sizeof dp) ;


        cout << f(a) << nl;

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
