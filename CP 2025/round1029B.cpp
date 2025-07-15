#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> p(n);
    int cur = n;

    // fill 2,4,6,... positions (1-based, so 1,3,5,... in 0-based)
    for (int i = 1; i < n; i += 2) {
        p[i] = cur--;
    }

    // fill remaining positions
    for (int i = 0; i < n; i += 2) {
        p[i] = cur--;
    }

    for (int x : p) cout << x << " ";
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
