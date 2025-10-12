/*
  In the name of Allah, the Most Gracious, the Most Merciful.
*/
//ceil : (a + b - 1) / b
#include <bits/stdc++.h>
using namespace std;

#define nl          '\n'
#define int         long long int
#define all(x)      x.begin(), x.end()
#define allr(x)     x.rbegin(), x.rend()
#define print(x)    for (auto u : x) cout << u << ' '
#define trace(x)    cout << #x << ": " << x << " \n";

void solve() {
  int n; cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  vector<int>f(209, 0);
  for (auto &x : v)
  {
    f[x]++;
  }
  int mex = 0;
  int it = 1e6;
  while (it--)
  {
    for (int i = 0; i <= 200; i++)
    {
      while (f[i] > 0)
      {
        f[i]--;
        mex++;
      }
    }
  }
  cout << mex << nl;

}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while (t--) {
    solve();
  }
}