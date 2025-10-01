#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    FAST_IO;

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        string result;
        for (char c : s) {

            if (!result.empty() && result.back() == c) {
                result.pop_back();
            } else {
                result.push_back(c);
            }
        }

        cout << max(1, (int)result.size()) << endl;
    }

    return 0;
}
