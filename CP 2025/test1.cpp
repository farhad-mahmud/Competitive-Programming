#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Modular multiplication without __int128
ll modmul(ll a, ll b, ll mod) {
    ll result = 0;
    a %= mod;
    while (b) {
        if (b & 1)
            result = (result + a) % mod;
        a = (a + a) % mod;
        b >>= 1;
    }
    return result;
}

// Modular exponentiation: (base^exp) % mod
ll modpow(ll base, ll exp, ll mod) {
    ll result = 1;
    base %= mod;
    while (exp) {
        if (exp & 1)
            result = modmul(result, base, mod);
        base = modmul(base, base, mod);
        exp >>= 1;
    }
    return result;
}

// Convert string to number mod m
ll str_mod(const string& s, ll m) {
    ll result = 0;
    for (char c : s) {
        result = (result * 10 + (c - '0')) % m;
    }
    return result;
}

// Miller-Rabin single base test
bool miller_test(const string& y, ll a) {
    ll n = str_mod(y, LLONG_MAX);  // works as a base for testing
    if (n < 2) return false;

    ll d = n - 1;
    int r = 0;
    while (d % 2 == 0) {
        d /= 2;
        r++;
    }

    ll x = modpow(a, d, n);
    if (x == 1 || x == n - 1) return true;

    for (int i = 1; i < r; i++) {
        x = modmul(x, x, n);
        if (x == n - 1) return true;
    }
    return false;
}

// Run Miller-Rabin with multiple bases
bool is_prime_string(const string& y) {
    ll n = str_mod(y, LLONG_MAX);
    if (n < 2) return false;
    if (n % 2 == 0 && n != 2) return false;

    vector<ll> bases = {2, 3, 5, 7, 11, 13, 17};
    for (ll a : bases) {
        if (a >= n) break;
        if (!miller_test(y, a)) return false;
    }
    return true;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        string x;
        int k;
        cin >> x >> k;

        string y = "";
        for (int i = 0; i < k; i++) y += x;

        cout << (is_prime_string(y) ? "YES\n" : "NO\n");
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
