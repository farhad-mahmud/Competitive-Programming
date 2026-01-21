#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int profit = 0;
    int watches = 0;

    int mx = 0;  

    for (int i = n - 1; i >= 0; i--) {
        mx = max(mx, a[i]);
        watches++;  

        if (a[i] == mx) {
            int sell = min(2LL, watches);
            profit += sell * a[i];
            watches -= sell;
        }
    }

    cout << profit <<endl ;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
