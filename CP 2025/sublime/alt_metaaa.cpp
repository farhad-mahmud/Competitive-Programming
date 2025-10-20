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

int n ;
int a[N] ;

bool f(int x) {

   int st = -1 ;

   for (int i = 0; i < n; i++) {

      if (a[i] <= x) {
         st = i ;
         break ;
      }
   }

   if (st == -1) {
      return false ;
   }


   int r = st ;

   while (r + 1 < n && abs(a[r + 1] - a[r]) <= x)
   {
      r++ ;
   }

   int l = st ;
   while (l - 1 >= 0 && abs(a[l - 1] - a[l]) <= x) {
      l-- ;
   }

   if (l == 0 && r == n - 1) {
      return true ;
   }
   else {
      return false ;
   }

}
void solve (int k )
{
   cin >> n ;

   for (int i = 0; i < n; i++)cin >> a[i] ;

   if (n == 1) {
      cout << "Case #" << k << ": " << a[0] << nl;
      return ;
   }

   //output(a) ;
   int l = 0, r = 1e9 , ans = r ;

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

   cout << "Case #" << k << ": " << ans << nl;
}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;

   cin >> t ;

   int k = 1 ;
   while (t--) {

      solve(k) ;
      k++ ;
   }


   return 0;
}
