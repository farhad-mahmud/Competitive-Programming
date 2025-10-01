#include<bits/stdc++.h>

#define ll long long int

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int moves = 0;
        bool possible = true;

        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 != i % 2) {
                bool found = false;
                for (int j = i + 1; j < n; j++) {
                    if (arr[j] % 2 != j % 2 && arr[j] % 2 == i % 2) {
                        swap(arr[i], arr[j]);
                        moves++;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    possible = false;
                    break;
                }
            }
        }

        if (possible) {
            cout << moves << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
