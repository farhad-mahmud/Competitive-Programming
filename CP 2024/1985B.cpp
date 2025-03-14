#include <bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    FAST_IO;

    int t;
    cin >> t;
    while (t--) {
        char latin[3][3];


        int a, b;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cin >> latin[i][j];
                if (latin[i][j] == '?') {
                    a = i;
                    b = j;
                }
            }
        }


        set<char> letters = {'A', 'B', 'C'};
        for (int j = 0; j < 3; j++) {
            if (latin[a][j] != '?') {
                letters.erase(latin[a][j]);
            }
        }

        cout << *letters.begin() << endl;
    }

    return 0;
}
