#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n, k;
    ll x;
    cin >> n >> k >> x;
    
    ll min_sum = (1LL * k * (k + 1)) / 2;
    ll max_sum = (1LL * k * (2 * n - k + 1)) / 2;
    
    if (x >= min_sum && x <= max_sum) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
