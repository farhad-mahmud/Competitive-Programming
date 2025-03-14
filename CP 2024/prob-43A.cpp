#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {


        int n;
        cin >> n;
        vector<string> strings;
        vector<int> counts;
        int max_count = 0;
        string winning_team;

        for (int i = 0; i < n; i++) {
            string input;
            cin >> input;

    bool found = false;
            for (int j = 0; j < strings.size(); j++) {
             if (strings[j] == input) {
                    counts[j]++;
                     found = true;
                    break;
                }
            }

            if (!found) {
                strings.push_back(input);
                counts.push_back(1);
            }
        }

        for (int i = 0; i < strings.size(); ++i) {
            if (counts[i] > max_count) {
                 max_count = counts[i];
             winning_team = strings[i];
            }
        }

        cout << winning_team << endl;


    return 0;
}
