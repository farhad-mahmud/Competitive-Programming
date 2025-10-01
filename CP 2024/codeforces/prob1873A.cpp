#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;


        if (s == "abc") {
            cout << "YES" << endl;
            continue;
        }

        bool isPossible = false;


        for (int i = 0; i < 3; i++) {
            for (int j = i + 1; j < 3; j++) {

                swap(s[i], s[j]);
                if (s == "abc") {
                    isPossible = true;
                }

                swap(s[i], s[j]);
            }
        }

        if (isPossible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
