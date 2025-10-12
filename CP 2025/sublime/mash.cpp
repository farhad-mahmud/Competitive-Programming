/*
  In the name of Allah, the Most Gracious, the Most Merciful.
*/

#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long int
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define print(x) for (auto u : x) cout << u << ' '
#define trace(x) cout << #x << ": " << x << " \n";

void solve() {
  int n, m;
  cin >> n >> m;

  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];
  vector<int> b(m);
  for (int i = 0; i < m; i++) cin >> b[i];

  // print(a); cout << nl;
  // print(b); cout << nl;

  vector<int> v;
  sort(all(a));
  int sum = 0;

  for (int i = 0; i < n - 1; i++) {
    if (abs(a[i] - a[i + 1]) <= 1) {
      sum += (a[i] + a[i + 1]);
    }

    v.push_back(sum);
  }


  // // cerr << sum << nl;
  int mn = *min_element(all(v));
  // // trace(mn);
  int mn2 = *min_element(all(b));

  if (mn > mn2) {
    no;
    return;
  }

  int sum2 = 0;
  for (int i = 0; i < m; i++) {
    sum2 += b[i];
  }
  // // trace(sum); trace(sum2);

  if (sum % sum2 == 0) {
    yes;
  } else {
    no;
  }
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}