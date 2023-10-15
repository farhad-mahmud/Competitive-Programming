#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int t = 1; t <= T; t++) {
        string S;
        cin >> S;

        float  overs = 0;
        int balls = 0;
        int runs = 0;
        int wickets = 0;

        for (int i = 0; i < S.length(); i++) {
            if (S[i] == 'W') {
                wickets++;
                balls++;
            } else {
                runs += S[i] - '0';
                balls++;
                if (balls % 6 == 0) {
                    overs++;
                    balls = 0;
                }
            }
        }

        if (balls > 0) {
            overs += balls / 6;
            balls %= 6;
        }

        cout << "Case " << t << ": ";
        cout << overs << ".";
        if (balls == 0) {
            cout << "0";
        } else {
            cout << balls;
        }
        cout << " Over(s) " << runs << " Run " << wickets << " Wicket." << endl;
    }

    return 0;
}
