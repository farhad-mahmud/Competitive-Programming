#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool can_survive(const vector<int>& times) {
    int n = times.size();
    vector<int> left(n), right(n);

    // Calculate the maximum distance you can move to the left from each position
    left[0] = 0;
    for (int i = 1; i < n; ++i) {
        left[i] = max(left[i - 1], times[i - 1] - 1);
    }

    // Calculate the maximum distance you can move to the right from each position
    right[n - 1] = 0;
    for (int i = n - 2; i >= 0; --i) {
        right[i] = max(right[i + 1], times[i + 1] - 1);
    }

    // Check if it's possible to survive from any starting position
    for (int i = 0; i < n; ++i) {
        // Check if you can reach either neighbor and reset
        if (i > 0 && left[i] >= i - 1 || i < n - 1 && right[i] >= n - 2 - i) {
            return true;
        }
    }

    return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> times(n);
        for (int i = 0; i < n; ++i) {
            cin >> times[i];
        }

        if (can_survive(times)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
