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
const int K = 1e6 ;
const int MOD = 1e9 + 7;

int dp[N];
int n , x; 

int a[K] ;

int f(int cur_val){


      cerr <<cur_val << nl;
      if(cur_val == 0) return 1 ;

      if(cur_val <0) return -1 ;

      if(dp[cur_val]!= -1) return dp[cur_val] ;

      int ans = 0 ;

      for(int i=0;i<n;i++){
           ans =  min(ans , f(cur_val - a[i])) ;
           

      }

      return dp[cur_val] = ans ;
}


void solve ()
{  
             cin >> n >> x ;

             for(int i=0;i<n;i++)cin >>a[i] ;

            memset(dp, -1 , sizeof dp) ;



             cout << f(x) << nl;


   
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
