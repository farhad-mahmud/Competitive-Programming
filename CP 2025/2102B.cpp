#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    long long m = std::llabs(a[0]);      
    int need = (n - 1) / 2;              
    int cntBig = 0;                     

    for (int i = 1; i < n; ++i)
        if (std::llabs(a[i]) > m) ++cntBig;

    if (cntBig >= need)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
