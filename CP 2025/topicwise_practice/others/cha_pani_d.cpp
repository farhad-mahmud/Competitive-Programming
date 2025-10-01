//------------------------------//
//        Author: Farhad       //
//------------------------------//

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

const int N = 1e5 + 9;
const int MOD = 1e9 + 7;

int n , a, b ;
int h[N] ;

bool f(int x) {

   int t = 0 ;

   for (int i = 0; i < n; i++) {
      int rem = 0 , op = 0 ;

      rem = max(0LL, h[i] - x * b);

      op = (rem + (a - b - 1)) / (a - b) ;

      t += op ;
   }

   return t <= x ;
}
void solve ()
{

   cin >> n >> a >> b ;

   for (int i = 0; i < n; i++) cin >> h[i] ;


   int l = 0 , r = 1e9 , ans = 0 ;

   while (l <= r) {

      int mid = (l + r) / 2 ;

      if (f(mid)) {

         ans = mid ;
         r = mid - 1 ;

      }
      else {

         l = mid + 1 ;
      }
   }


   cout << ans << nl;
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
