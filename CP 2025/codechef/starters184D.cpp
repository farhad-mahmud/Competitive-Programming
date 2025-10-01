#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n; 
    cin >> n;

    vector<int> a(n); // ✅ reserve space

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int cnt = 0, cnt2 = 0;

    for (int i = 0; i < n - 1; i++) {
        if (a[i] < a[i + 1]) {
            cnt++;
        }
        if (a[i] > a[i + 1]) {
            cnt2++;
        }
    }

    if (a[0] == 0 || a.back() == 0) {  // ✅ use number 0, not char '0'
        if ((cnt == 0 && cnt2 > 1) || (cnt2 == 0 && cnt > 1)) {
            cout << 2 << endl;
            return;
        }
    }

    cout << 0 << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
