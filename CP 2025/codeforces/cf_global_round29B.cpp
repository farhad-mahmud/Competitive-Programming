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


void solve ()
{

   int n ; cin >> n ;

   int x = 2 * n ;

   vector<int > v(x + 1);

   if (n & 1) {

      int l = 1 , r = x / 2 ;

      int k = n - 1 ;

      while (l <= r) {


         if (l == r) {

            v[l] = n ;
            break ;
         }

         v[l] = k ;
         v[r] = k ;


         k -= 2 ;
         l++ ;
         r-- ;
      }

      int l2 = (x / 2) + 1 , r2 = x ;

      int k2 = n - 2 ;
      cerr << k2 << nl;

      while (l2 <= r2) {

         if (l2 == r2) {

            v[l2] = n ;
            break  ;
         }

         v[l2] = k2 ;
         v[l2 + k2 ] = k2 ;

         k2 -= 2 ;
         l2++ ;
         r2-- ;
      }
   }
   else {  // n even

      int l = 1 , r = (x / 2) + 1 ;

      int k = n ;

      int mid = 0 ;
      while (l <= r) {

         if (l == r) {

            v[l] = n - 1 ;

            mid = l ;
            break ;

         }
         else {

            v[l] = k ;
            v[r] = k ;

            k -= 2 ;

         }

         l++ ;
         r-- ;
      }

      int l2 = (x / 2) + 2 , r2 = x ;

      int k2 = 0 ;
      if (n == 2) {
         k2 = n - 1;
      }
      else {
         k2 = n - 3 ;
      }

      while (l2 <= r2) {

         if (l2 == mid + (n - 1)) {

            v[l2] = n - 1 ;

         }
         else if (k2 != 1) {

            v[l2] = k2 ;
            v[l2 + k2 ] = k2 ;

            k2 -= 2 ;
         }

         l2++ ;
         r2-- ;

      }

   }

   for (int i = 1; i <= x; i++) {

      if (v[i] == 0) {
         cout << 1 << ' ' ;
      }
      else {

         cout << v[i] << ' ' ;
      }
   }

   cout << nl ;
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
