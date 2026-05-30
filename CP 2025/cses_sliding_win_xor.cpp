#include <bits/stdc++.h>
using namespace std;

#define int  long long
#define nl   "\n"

void solve() {  
    int n, k; cin >> n >> k;
    int x, a, b, c; cin >> x >> a >> b >> c;

    vector<int> v(n + 1);
    v[1] = x;

    for (int i = 2; i <= n; i++) {
        v[i] = (a * (v[i - 1]) + b) % c;
    }

    int cur_or = v[1];

    for (int i = 2; i <= k; i++) {
        cur_or = cur_or | v[i];
    }  

    vector<int> orr;
    orr.push_back(cur_or);

    for (int i = k + 1; i <= n; i++) {
        cur_or = cur_or | v[i];
        // Note: bitwise OR is NOT reversible. This line below will not "remove" v[i-k].
        cur_or = cur_or | v[i - k]; 

        orr.push_back(cur_or);
    }

    int ans = orr[0];
    for (int i = 1; i < orr.size(); i++) {
        ans = ans | orr[i];
    }

    cout << ans << nl;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}