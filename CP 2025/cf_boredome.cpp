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

const int N = 1e5+ 3 ;
const int MOD = 1e9 + 7;


int dp[N];
int n ;
int a[N];

int points[N] ;
// int cnt = 0;
int f(int i){
         
      if(i > 100000 ){
           return 0 ;
      }
      
      if(dp[i] != -1){
           return dp[i] ;
      }
      // take the current or skip it..

      cerr << points[i] << nl; 
      int ans = max(f(i+1) , f(i+2) + points[i]) ;

      return dp[i] = ans ;


}

void solve ()
{  
            cin >> n ;


            memset(points, 0 , sizeof points) ;
            for(int i=0;i<n;i++){
                 cin >> a[i] ;
                 points[a[i]] += a[i] ;
            }

            // for(int i=0;i<n;i++){
            //       cout << points[i] <<nl;
            // }

         
            memset(dp,-1, sizeof dp) ;



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
