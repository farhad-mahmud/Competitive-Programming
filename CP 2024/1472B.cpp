#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define ull unsigned long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define pb push_back
#define ff first
#define ss second
#define all(f) f.begin(), f.end()
#define rall(f) f.rbegin(), f.rend()
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define repr(i, a, b) for (int i = (a); i >= (b); --i)
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define nl cout << '\n';

const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const double PI = acos(-1);

int main() {
    FAST_IO;

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> candy(n);
        int sum = 0;
        int count_1 = 0, count_2 = 0;

        for (int i = 0; i < n; i++) {
            cin >> candy[i];
            sum += candy[i];
            if (candy[i] == 1) count_1++;
            else count_2++;
        }

        if (sum % 2 != 0) {
            no;
            continue;
        }

        int half_sum = sum / 2;


        int used_2 = min(count_2, half_sum / 2);
        int remaining_weight = half_sum - used_2 * 2;


        if (remaining_weight <= count_1) {
            yes;
        } else {
            no;
        }
    }

    return 0;
}
