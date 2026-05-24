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

int dp[N][K] ;

int n , x; 

int a[K] ;
int c[K] ;
int f(int i,int cur_val ){

///cerr << i << nl ;
      if(cur_val > x ) return 0; 
      if(i == n+1){
            if(cur_val == x)return 1 ;
            else return 0  ;
      }

      int &ans = dp[i][cur_val];

      if (ans != -1) return ans ;
      ans = 1e18 ;

      for(int cnt = 0 ;cnt <=c[i]; cnt++){
            // ans += f(i +1 , cur_val + a[i]*cnt) ;
            ans = min(ans , 1+f(i+1 ,cur_val + a[i]*cnt)) ;

            //cerr << a[i] << ' ' << c[i] << nl;
          
     }


      return ans ;


}


void solve ()
{  
             cin >> n >> x ;

             for(int i=1;i<=n;i++)cin >>a[i] ;


             for(int i=1;i<=n;i++){
                  int v = x/ a[i] ;
                  c[i] = v ;

             }
            memset(dp, -1 , sizeof dp) ;



             cout << f(0,0) << nl;


   
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
