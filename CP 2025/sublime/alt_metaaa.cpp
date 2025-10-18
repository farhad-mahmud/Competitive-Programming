//---  Bismillahir Rahmanir Rahim ---//
//------------------------------//
//        Author: Farhad       //
//------------------------------//

#include <bits/stdc++.h>
using namespace std;

#define int  long long
#define nl "\n"

void solve(int k) {
   int n; cin >> n;
   vector<int> a(n);
   for (int i = 0; i < n; i++) cin >> a[i];

   if (n == 1) {
      cout << "Case #" << k << ": " << a[0] << nl;
      return;
   }

   int l = 0, r = 1e9, ans = r;

   auto canVisitAll = [&](int h) -> bool {
      // Find the leftmost platform reachable from ground
      int left = -1, right = -1;
      for (int i = 0; i < n; i++) {
         if (a[i] <= h) { // first reachable from ground
            left = i;
            right = i;
            break;
         }
      }
      if (left == -1) return false;

      // Expand right
      while (right + 1 < n && abs(a[right + 1] - a[right]) <= h) right++;
      // Expand left
      while (left - 1 >= 0 && abs(a[left] - a[left - 1]) <= h) left--;

      return (left == 0 && right == n - 1);
   };

   while (l <= r) {
      int mid = (l + r) / 2;
      if (canVisitAll(mid)) {
         ans = mid;
         r = mid - 1;
      } else {
         l = mid + 1;
      }
   }

   cout << "Case #" << k << ": " << ans << nl;
}

int32_t main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);

   int t; cin >> t;
   for (int k = 1; k <= t; k++) solve(k);
}
