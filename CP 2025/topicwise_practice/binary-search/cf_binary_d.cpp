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

   vector<int > a(n) ;

   for (int i = 0; i < n; i++) cin >> a[i] ;

   int k ; cin >> k ;

   sort(a.begin(), a.end()) ;

   while (k--) {

      int x , y ; cin >> x >> y ;

      int x1 = x ;

      int x2 = y ;

      int l = 0 , r = n ;

      while (l < r) {

         int mid = (l + r) / 2 ;

         if (a[mid] >= x1) {

            r = mid ;
         }
         else {

            l = mid + 1 ;
         }

      }

      int l2 = 0 , r2 = n ;

      while (l2 < r2) {

         int mid = (l2 + r2) / 2 ;

         if (a[mid] > x2) {

            r2 = mid  ;
         }
         else {

            l2 = mid + 1 ;
         }
      }


      cout <<  l2 - l << nl ;

   }

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
