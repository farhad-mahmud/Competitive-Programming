#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    string s;
    int n;
    if (!(cin >> s >> n)) return;
    
    vector<ll> d(n);
    for (int i = 0; i < n; ++i) {
        cin >> d[i];
    }
    
    ll a = stoll(s);
    ll ans = -1;
    
    auto update = [&](ll b) {
        if (b < 0) return;
        ll diff = abs(a - b);
        if (ans == -1 || diff < ans) {
            ans = diff;
        }
    };
    
    int len = s.length();
    
    if (len > 1) {
        ll b = 0;
        for (int i = 0; i < len - 1; ++i) {
            b = b * 10 + d.back();
        }
        update(b);
    }
    
    {
        ll b = 0;
        for (int i = 0; i <= len; ++i) {
            b = b * 10 + d.front();
        }
        update(b);
    }
    
    ll prefix = 0;
    bool prefix_valid = true;
    
    for (int i = 0; i < len; ++i) {
        if (!prefix_valid) break;
        int cur_digit = s[i] - '0';
        
        for (ll digit : d) {
            if (digit < cur_digit) {
                ll b = prefix * 10 + digit;
                for (int j = i + 1; j < len; ++j) {
                    b = b * 10 + d.back();
                }
                update(b);
            } else if (digit > cur_digit) {
                ll b = prefix * 10 + digit;
                for (int j = i + 1; j < len; ++j) {
                    b = b * 10 + d.front();
                }
                update(b);
            }
        }
        
        if (find(d.begin(), d.end(), cur_digit) != d.end()) {
            prefix = prefix * 10 + cur_digit;
        } else {
            prefix_valid = false;
        }
    }
    
    if (prefix_valid) {
        update(prefix);
    }
    
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}