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
   int n , l, r ; cin >> n >> l >> r ;

   vector<int > a(n) ;
   int cnt = 0 ;

   for (int i = 0; i < n; i++) cin >> a[i] ;



   sort(a.begin(), a.end()) ;


   for (int i = 0; i < n; i++) {

      int left = l - a[i] ;
      int right = r - a[i] ;

      // binary search for lowerbound on Left ..

      int l1 = i + 1 , r1 = n ;

      while (l1 < r1) {

         int mid = (l1 + r1) / 2 ;

         if (a[mid] >= left) {

            r1 = mid ;
         }
         else {

            l1 = mid + 1 ;
         }

      }

      // binary search for upperbound on right

      int l2 = i + 1 , r2 = n ;

      while (l2 < r2) {

         int mid = (l2 + r2) / 2 ;

         if (a[mid] > right) {

            r2 = mid  ;
         }
         else {

            l2 = mid + 1 ;
         }
      }


      cnt += l2 - l1 ;

   }

   cout << cnt << nl ;

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
