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
int n , s ;

int ans = 0 ;

int ans2 = 0 ;

int c1 = -1;
bool f(int x) {

   int cst = 0 ;
   int p = 0 ;
   for (int i = 0; i < n; i++) {
      cst += a[i] + ((i + 1) * x) ;
      //cerr << cst << nl ;
      if (cst <= s) {
         p++ ;
         cerr << "x " << x << " p " << p << nl ;
      }
      else {
         break ;
      }

   }
   if (x == p) {
      c1 = p ;
   }
   return p <= n ;

}
int c2 = -1 ;
bool f2(int x) {

   int cst = 0 ;
   int p = 0 ;
   for (int i = 0; i < n; i++) {
      cst += a[i] + ((i + 1) * x) ;
      //cerr << cst << nl ;
      if (cst <= s) {
         p++ ;
         cerr << "x " << x << " p " << p << nl ;
      }
      else {
         break ;
      }

   }
   if (x == p) {
      c2 = p ;
   }
   return p <= n ;

}

void solve ()
{

   cin >> n >> s ;

   for (int i = 0; i < n; i++)cin >> a[i] ;

   sort(a, a + n) ;

   //output(a) ;
   int l = 1 , r = n ;

   while (l <= r ) {
      int mid = (l + r) / 2 ;

      if (f(mid)) {

         r = mid - 1 ;
      }
      else {
         l = mid + 1 ;
      }

   }

   int l2 = 1, r2 = n ;

   while (l2 <= r2) {
      int mid = (l2 + r2) / 2 ;

      if (f2(mid)) {
         l = mid + 1 ;

      }
      else {
         r = mid - 1 ;
      }

   }


   int p = 0 ;
   if (c1 == -1) {
      p = c2 ;
   }
   else {
      p = c1 ;
   }

   int cst = 0 ;

   for (int i = 0; i < p; i++) {
      cst += a[i] + ((i + 1) * p) ;
   }

   cout << p << ' ' << cst << nl ;

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
