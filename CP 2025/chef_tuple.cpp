#include<bits/stdc++.h>
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int n, a, b, c; cin >> n >> a >> b >> c;
    vector<int> divs;
    for (int i = 1; i * i <= n; i++) {
      if (n % i == 0) {
        divs.push_back(i);
        if (i != n / i) {
          divs.push_back(n / i);
        }
      }
    }
    int ans = 0;
    for (auto x: divs) {
      if (x <= a) {
        for (auto y: divs) {
          if (y <= b) {
     
            if (n % (1LL * x * y) == 0) {
              int z = n / (x * y);
              if (z <= c) {
                ++ans;
              }
            }
          }
        }
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
// time complexity: O(t * N^(2/3))