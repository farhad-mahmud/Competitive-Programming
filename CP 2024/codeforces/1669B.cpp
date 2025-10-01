#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);


        for (int i = 0; i < n; i++) {
            cin >> arr[i];

        }

        vector<int> cnt(n + 1, 0);

        for (int i = 0; i < n; i++) {
            cnt[arr[i]]++;
        }


        bool found = false;
        for (int i = 0; i < n; i++) {
            if (cnt[arr[i]] >= 3) {
                cout << arr[i] << endl;
                found = true;
                break;
            }
        }


        if (!found) {
            cout << -1 << endl;
        }
    }
    return 0;
}
