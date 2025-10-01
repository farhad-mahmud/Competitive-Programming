#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0);
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

bool is_valid(vector<int> &a, vector<int> &b, int n) {
    set<int> unique_c;
    for (int i = 0; i < n; i++) {
        unique_c.insert(a[i] + b[i]);
    }
    return unique_c.size() >= 3;
}

int main() {
    FAST_IO;

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        if (is_valid(a, b, n)) {
            yes;
            continue;
        }

        sort(a.begin(), a.end());
        if (is_valid(a, b, n)) {
            yes;
            continue;
        }

        reverse(a.begin(), a.end());
        if (is_valid(a, b, n)) {
            yes;
        } else {
            no;
        }
    }
    return 0;
}
