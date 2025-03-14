#include <bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    FAST_IO;

    int n;
    cin >> n;
    vector<int> a(n);

    int ones = 0;
    vector<int> diff(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 1) {
            ones++;
            diff[i] = -1;
        } else {
            diff[i] = 1;
        }
    }


    int segment = INT_MIN, current_sum = 0;
    for (int i = 0; i < n; i++) {
        current_sum = max(diff[i], current_sum + diff[i]);
        segment = max(segment, current_sum);
    }


    if (ones == n) {
        cout << n - 1 << endl;
    } else {
        cout << ones + segment << endl;
    }

    return 0;
}
