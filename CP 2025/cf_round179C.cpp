#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int> a(n+1);
    map<int, vector<int>> p;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        p[a[i]].push_back(i);
    }

    if (p.size() == 1) {
        cout << 0 << '\n';
        return;
    }

    int ans = LLONG_MAX;

    for (auto [val, pos_list] : p) {
      
        for (int pos : pos_list) {

            int l_cost = (pos-1) * val;

            int r_cost = (n-pos) * val;

            int total_cost = l_cost + r_cost;

            ans = min(ans, total_cost);
        }
    }

    cout << ans << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}
