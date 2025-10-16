//---  Bismillahir Rahmanir Rahim ---//

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

int n , k ;
int a[N] ;

bool f(double x) {

   int p = 0 ;
   for (int i = 0; i < n; i++) {

      p += a[i] / x ;
   }

   return p >= k ;
}

void solve ()
{
   cin >> n >> k ;

   for (int i = 0; i < n; i++) cin >> a[i] ;

   sort(a, a + n)  ;

   double  l = 0 ;
   double r = a[n - 1] ;

   cerr << r << nl ;

   //int ans = 0 ;

   while (r - l > 1e-6) {
      double mid = (l + r) / 2 ;

      if (f(mid)) {

         l = mid  ;
      }
      else {
         r = mid  ;
      }
   }

   cout << fixed << setprecision(6) << l << nl ;

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
