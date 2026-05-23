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

const int N = 2e5+3 ;
const int MOD = 1e9 + 7;

int dp[N][2]
int a[N] ;
int f(i,min){

      if(i== n){
          return 0 ;
      }

      if(dp[i][min] != -1){
           return dp[i][min] ;
      }

      int ans = 0 ;
      if(min == 1){
            ans = a[i] + f(i+1, 1) ;

      }
      else{
            ans = a[i] + f(i+1, 0) ;
      }

      int ans2 = 0 ;
      if(a[i] > 0){

           if(min == 0){
                  ans2 = -a[i] + f(i+1,1) ;
            }
            else{
                 ans2 = -a[i] + f(i+1,0) ;
            }
      }

      return dp[i][min] = ans ;


}

void solve ()
{  
            int n ; cin >> n ;

            for(int i=1;i<=n;i++)cin >> a[i] ;



            cout << f(1, 0) << nl ;

}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;

   cin >> t ;

   while (t--) {

      solve() ;

   }


   return 0;
}
