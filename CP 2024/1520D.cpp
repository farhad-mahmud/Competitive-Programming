#include <bits/stdc++.h>
using namespace std;

#define sqr(f)        (f) * (f)
#define sz(f)         (int)f.size()
#define all(f)        (f).begin(),(f).end()
#define rall(f)       (f).rbegin(),(f).rend()
#define prec(f)       fifed<<setprecision(f)
#define  ll            long long int

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        unordered_map<int, long long> freq;
        ll counte = 0;

        for (int i = 0; i < n; i++) {
            int value = arr[i] - i;
            if (freq.count(value)) {
                counte += freq[value];
            }
            freq[value]++;
        }

        cout << counte << endl;
    }
    return 0;
}
