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

int n ;
int h[N] , a , b ;

bool f (int x) {

   int mx = h[n - 1] ;

   int rem = mx - b * x ;

   int ext = (rem + (a - b - 1)) / (a - b) ;


   return ext <= x  ;

}

void solve ()
{
   cin >> n >> a >> b ;

   for (int i = 0; i < n; i++) cin >> h[i] ;

   sort(h , h + n) ;


   int l = 0 , r = 1e9 , ans = 1e18 ;


   while (l <= r) {

      int mid = (l + r) / 2 ;

      if (f(mid)) {

         ans = mid ;
         r = mid - 1 ;
      }
      else {

         l = mid + 1;
      }

   }

   cout << ans << nl;
}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;

   // cin >> t ;

   while (t--) {

      solve() ;

   }


   return 0;
}
