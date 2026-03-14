//---  Bismillahir Rahmanir Rahim ---//
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define nl "\n"
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend();
#define dbug(x) cerr << (#x) << " is " << (x) << nl;
#define output(a) for (auto &it : a) cerr << it << " "; cerr << nl;

const int N = 100 + 9;

int n, p[100], c[100];

map<double, double> dp[N];


double round_s(double s) {
    return round(s * 1e6) / 1e6;
}

void solve() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> c[i] >> p[i];

    // clear dp
    for (int i = 0; i <= n; i++) dp[i].clear();

    // base case: 0 tasks done, stamina = 1.0, points = 0
    dp[0][1.0] = 0.0;

    // iterative DP
    for (int i = 0; i < n; i++) {
        for (auto &[s, points] : dp[i]) {
            double s_r = round_s(s);

            // choice 1: skip task i
            dp[i + 1][s_r] = max(dp[i + 1][s_r], points);

            // choice 2: take task i
            double new_s = round_s(s_r * (1.0 - p[i] / 100.0));
            dp[i + 1][new_s] = max(dp[i + 1][new_s], points + c[i] * s_r);
        }
    }

    // answer = max points after n tasks
    double ans = 0.0;
    for (auto &[s, points] : dp[n]) ans = max(ans, points);

    cout << fixed << setprecision(10) << ans << nl;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}