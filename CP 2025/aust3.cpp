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

bool f(int k) {

   int sum =  (k * (k + 1)) / 2 ;

   return sum >= n ;

}
void solve ()
{
   cin >> n ;

   int ans = 0 ;

   int l = 0 , r = 1e10 ;

   while (l <= r) {

      int mid  = (l + r) / 2;

      cerr << mid << nl;

      if (f(mid))
      {
         ans = mid ;
         r = mid - 1 ;
      }
      else {

         l = mid + 1 ;

      }
   }


   cout << ans << nl ;
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
