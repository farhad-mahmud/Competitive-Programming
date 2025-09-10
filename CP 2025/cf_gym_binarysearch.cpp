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

   int n, k ; cin >> n >> k ;

   vector<int > a(n) ;

   for (int i = 0; i < n; i++) cin >> a[i] ;


   output(a) ;


   while (k--) {

      int x ; cin >> x ;

      int l = 0 , r = n ;

      //int ans = 0 ;

      while (l < r) {

         int mid = (l + r) / 2 ;

         cerr << a[mid] << ' ' << x << nl;

         if (a[mid] >  x) {

            r = mid ;

            cerr << "r " << r << nl;
         }
         else {

            l = mid + 1 ;
         }
      }

      cout << r  << nl;

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
