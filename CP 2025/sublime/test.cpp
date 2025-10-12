#include <bits/stdc++.h>
using namespace std;

#define int long long
#define nl '\n'

void solve() {
  int n;
  cin >> n;
  vector<long long> b(n);
  for (int i = 0; i < n; i++) cin >> b[i];

  vector<int> a;
  unordered_map<int, int> last_pos; // last occurrence of each number
  set<int> used;                   // set of numbers we can reuse
  int next_new = 1;                 // next new number to use
  long long prev_b = 0;

  for (int i = 0; i < n; i++) {
    long long d = b[i] - prev_b;
    prev_b = b[i];

    if (d > 1) {
      // try to reuse an old number if possible
      bool reused = false;
      for (int num : used) {
        // we can reuse any previously used number
        a.push_back(num);
        last_pos[num] = i;
        reused = true;
        break;
      }
      if (!reused) {
        // no number can be reused → take new
        a.push_back(next_new);
        last_pos[next_new] = i;
        used.insert(next_new);
        next_new++;
      }
    } else {
      // difference == 1 → repeat last placed number
      if (a.empty()) {
        a.push_back(next_new);
        last_pos[next_new] = i;
        used.insert(next_new);
        next_new++;
      } else {
        int last = a.back();
        a.push_back(last);
        last_pos[last] = i;
        used.insert(last);
      }
    }
  }

  for (int x : a) cout << x << ' ';
  cout << nl;
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) solve();
}
