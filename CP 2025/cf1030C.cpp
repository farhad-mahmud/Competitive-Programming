#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'


int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;   cin >> t;
    while (t--) {
        ll n, k;    cin >> n >> k;
        vector<ll> a(n + 1), bit(64, 0);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            for (int j = 0; j < 63; j++) {
                if ((a[i] & (1LL << j))) bit[j]++;
            }
        }
        ll ans = 0;
        for (int i = 0; i < 63; i++) {
            ans += bit[i];
        }
        for (int i = 0; i < 63; i++) {
            if (k == 0 or k < i + 1) break;
            if (bit[i] == n) continue;
            // ll available = (i + 1) * (n - bit[i]);
            ll for_one = (1LL << i);
            ll nibo = min(n - bit[i], k / for_one);
            // cout << i + 1 << ' ' << for_one * nibo << nl;
            ans += nibo;
            k -= (for_one * nibo);   
        }
        // cout << k << nl;
        cout << ans << nl;
    }    
}