#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;


        if (n != 5) {
            cout << "NO" << endl;
            continue;
        }


        int counte[256] = {0};


        for (int i = 0; i < n; i++) {
            counte[s[i]]++;
        }


        if (counte['T'] == 1 && counte['i'] == 1 && counte['m'] == 1 && counte['r'] == 1 && counte['u'] == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
