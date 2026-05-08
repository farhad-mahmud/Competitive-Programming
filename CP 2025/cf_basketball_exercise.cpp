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

const int N = 1e5+5 ;


int a[N],b[N] ;
int dp[N][3] ;
int n ;
// j = prev day..

int f(int i, int r){

      if(i == n+1) return 0 ;
      
      if(dp[i][r] != -1) return dp[i][r] ;


      int ta = 0 , tb = 0 ;

      if(r != 0){ // prev selected row was not 0 .

            // ei element nibo naki nibona..
         // current element na nile.. ei porer state e prev value.. hobe. element 1
         // 
            ta = max(f(i+1,1), a[i] + f(i+1 , 0)) ;
      }
      if(r != 1){   // prev selected row was not 1 ..

            tb = max(f(i+1,0),  b[i] + f(i+1, 1)) ;
      }

   
      int res = max(ta,tb) ;

      dp[i][r] = res ;


      return dp[i][r] ;
 }

void solve ()
{  
               cin >>n ;
              
               for(int i=1;i<=n;i++){
                    cin >> a[i]  ;
               }
               for(int i=1;i<=n;i++){
                    cin >> b[i]  ;
               }

               memset(dp, -1 , sizeof dp) ;


               cout << f(1,2) << nl ;
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
