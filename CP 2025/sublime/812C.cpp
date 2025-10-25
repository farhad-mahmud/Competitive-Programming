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

int a[N] ;
int n, s ;
int v[N] ;

int fsum = 0 ;
bool f(int x) {

   //cerr << "x" << ' ' << x << nl ;
   for (int i = 0; i < n; i++) {
      int cst = a[i] + 1LL * ((i + 1) * x) ;
      v[i] = cst;

   }

   sort(v, v + n) ;
   int sum = 0 ;
   for (int i = 0; i < x; i++) {
      sum += v[i] ;
      if (sum > s) {
         break ;
      }
   }

   //cerr << x << ' ' <<  sum << nl;

   if (sum <= s) {
      fsum = sum ;
      return true ;
   }
   return false ;
}
void solve ()
{
   cin >> n >> s  ;
   for (int i = 0; i < n; i++)cin >> a[i] ;
   int l = 0, r = n ;

   int ans = 0 ;

   //sort(a, a + n) ;

   while (l <= r) {
      int mid = (l + r) / 2 ;

      if (f(mid)) {
         //yes;

         l = mid + 1 ;
         ans = mid ;
      }
      else {
         r = mid - 1 ;
      }
   }

   cout << ans << ' ' << fsum << nl ;

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
