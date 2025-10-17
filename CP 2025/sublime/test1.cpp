//---  Bismillahir Rahmanir Rahim ---//
//------------------------------//
//        Author: Farhad       //
//------------------------------//

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define nl "\n"

void solve() {
   int a, b;
   cin >> a >> b;

   if (a == b) {
      cout << 0 << nl;
      return;
   }

   int x = a ^ b;

   // 1-step solution if possible
   if (x <= a) {
      cout << 1 << nl;
      cout << x << nl;
      return;
   }

   // 2-step solution: pick subset of bits of x
   int x1 = 0;
   for (int i = 0; i < 64; i++) { // try low bits first
      if ((x >> i) & 1) {
         int candidate = x1 | (1LL << i);
         int a1 = a ^ candidate;
         int x2 = x ^ candidate;
         if (candidate <= a && x2 <= a1) {
            x1 = candidate;
         }
      }
   }

   int a1 = a ^ x1;
   int x2 = x ^ x1;

   if (x1 == 0 || x2 == 0 || x1 > a || x2 > a1) {
      cout << -1 << nl;
      return;
   }

   cout << 2 << nl;
   cout << x1 << ' ' << x2 << nl;
}

int32_t main() {
   ios_base::sync_with_stdio(false);
   cin.tie(0);

   int t;
   cin >> t;
   while (t--) solve();
}
