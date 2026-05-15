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


int a[N],b[N],c[N] ;
int dp[N][4] ;
int n ;
// j = prev day..

int f(int i, int j){

      if(i == n+1) return 0 ;
      
      if(dp[i][j] != -1) return dp[i][j] ;


      int pa = 0, pb = 0 , pc = 0 ;

      if(j != 0){ // prev activity was not 0 ..
                // so at this day we can pick activity 0 ..
            pa =  a[i] + f(i+1, 0) ;

      }
      if(j != 1){ // prev activity was not 1 .so at this current day we can pick 
                     // activity 1 as a valid.. value.. 
            pb =  b[i] + f(i+1 , 1) ;
      }

      if(j != 2) {
            pc = c[i] + f(i+1 , 2) ;
      }  

      int res = max(pa, max(pb,pc)) ;

      dp[i][j] = res ;

      //cerr << a[i] << ' ' << b[i] << ' ' << c[i]  << nl;

      return dp[i][j] ;
 }

void solve ()
{  
               cin >>n ;
              
               for(int i=1;i<=n;i++){
                    cin >> a[i] >> b[i] >> c[i] ;
               }
               memset(dp, -1 , sizeof dp) ;


               cout << f(1,3) << nl ;
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
