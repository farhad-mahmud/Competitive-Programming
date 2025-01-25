#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> strings;
       vector<int> counts;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        bool found = false;
        for (int j = 0; j < strings.size(); j++) {
            if (strings[j] == s) {

                  found = true;
                cout << s << counts[j] << endl;
                counts[j]++;
                break;
            }
        }

        if (!found) {

            cout << "OK" << endl;
            strings.push_back(s);
            counts.push_back(1);
        }
    }

    return 0;
}
