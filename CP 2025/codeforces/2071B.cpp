#include <bits/stdc++.h>

using namespace std;

#define ll long long  

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const ll MOD = 1e9 + 7;

bool is_square(ll x) { 
    if (x < 0) return false;
    ll s = sqrt(x);
    return (s * s == x);
}

void solve() {
    ll n;
    cin >> n;

    ll sum = n * (n + 1) / 2;  

    if (n == 1 || is_square(sum)) {
        cout << -1 << "\n";
        return;
    }

    ll sum1 = 0;
    vector<ll> p {2, 1};

    for (ll i = 3; i <= n; i++) {
        p.push_back(i);
    }

    for (ll i = 0; i < n; i++) {
        if (is_square(sum1 + p[i])) {
            bool a = false;
            for (ll j = i + 1; j < n; j++) {
                if (!is_square(sum1 + p[j])) {
                    swap(p[i], p[j]);
                    a = true;
                    break;
                }
            }
            if (!a) break;  // if a is false 
        }
        sum1 += p[i];
    }

    for (ll i : p) {
        cout << i << ' ';
    }
    cout << endl;
}

int main() {
    FAST_IO;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
