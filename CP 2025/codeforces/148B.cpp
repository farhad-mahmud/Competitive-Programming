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


void solve ()
{
   int n , q, k ; cin >> n >> q >> k ;

   vector<int > a(n + 1); for (int i = 1; i <= n; i++)cin >> a[i] ;

   vector<int > b(n + 1) ;

   for (int i = 2 ; i < n; i++) {

      b[i] = a[i + 1] - a[i - 1] - 2 ;
      cerr << b[i] << nl;
   }

   for (int i = 2 ; i <= n ; i++) {
      b[i] += b[i - 1] ;
   }

   while (q--) {

      int l , r ; cin >> l >> r ;
      int ans = 0 ;

      if (l == r) {
         cout << k - 1 << nl;
      }
      else {

         ans = b[r - 1] - b[l] + (a[l + 1] - 2) + (k - a[r - 1] - 1) ;

         cout << ans << nl;
      }

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
