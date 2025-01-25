#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> sticks(n);


        for (int i = 0; i < n; i++) {
            cin >> sticks[i];
        }


        sort(sticks.begin(), sticks.end());

        vector<int> legs;
        vector<int> bases;
        bool found = false;


        int legIndex1 = -1, legIndex2 = -1;
        for (int i = 0; i < n - 1; i++) {
            if (sticks[i] == sticks[i + 1]) {
                legs.push_back(sticks[i]);
                legs.push_back(sticks[i + 1]);
                legIndex1 = i;
                legIndex2 = i + 1;
                break;
            }
        }


        if (legs.size() != 2) {
            cout << -1 << endl;
            continue;
        }

        int sum = legs[0] + legs[1];

        for (int i = 0; i < n - 1; i++) {
            if (i == legIndex1 || i == legIndex2 || i + 1 == legIndex1 || i + 1 == legIndex2) {

                continue;
            }

                if (sum > abs(sticks[i + 1] - sticks[i])) {
                    bases.push_back(sticks[i]);
                    bases.push_back(sticks[i + 1]);
                    found = true;
                    break;
                }

        }


        if (found) {
            cout << legs[0] << " " << legs[0] << " " << bases[0] << " " << bases[1] << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
