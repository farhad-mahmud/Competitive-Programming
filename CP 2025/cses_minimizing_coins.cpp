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

const int N = 1e6 + 2 ;
const int MOD = 1e9 + 7;
const int INF = 1e9 ;



void solve ()
{  
             int n , x; cin >> n >> x ;

             int a[102] ;

             for(int i=1;i<=n;i++)cin >>a[i] ;

            int dp[N] ;


            for (int i = 1; i <= x; i++) {
               dp[i] = INF;
            }


             dp[0] = 0 ; // 0 coins needed to sum = 0 .

            for(int i=1;i<=x;i++){
                 for(int j =1;j<=n;j++){
                     if(i >= a[j]){ // if cur val is greater then the coin..
                           //cerr << a[j] << nl; 
                           dp[i] = min(dp[i] , 1+ dp[i - a[j]])  ;
                     }  
                 }
            }

         
           if(dp[x] >= INF){
               cout << -1 << nl;
           }
           else{
               cout << dp[x] <<nl;
           }


   
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
