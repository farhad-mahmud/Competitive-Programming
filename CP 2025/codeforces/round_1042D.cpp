#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        vector<long long> S(n), T(n);
        for (auto &x : S) cin >> x;
        for (auto &x : T) cin >> x;

        multiset<pair<long long,long long>> ms; // {a, abs(a - k)}
        for (auto a : S) ms.insert({a, abs(a - k)});

        bool ok = true;
        for (auto b : T) {
            bool found = false;
            auto it = ms.lower_bound({b, -1e18});
            vector<multiset<pair<long long,long long>>::iterator> cands;
            if (it != ms.end()) cands.push_back(it);
            if (it != ms.begin()) cands.push_back(prev(it));

            for (auto cand : cands) {
                long long a = cand->first;
                long long x = cand->second;
                long long y = abs(a - b);
                if ((x == 0 && y == 0) || (x != 0 && y % x == 0) || (y != 0 && x % y == 0)) {
                    ms.erase(cand);
                    found = true;
                    break;
                }
            }
            if (!found) { ok = false; break; }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
}
