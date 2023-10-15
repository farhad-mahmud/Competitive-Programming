#include <iostream>
#include <cstring>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin.ignore();
    getline(cin, s);

    set<char> uniqueLetters; // Create a set to store unique letters encountered

    for (int i = 0; i < n; i++) {
        char c = tolower(s[i]);

        if (c >= 'a' && c <= 'z') {
            uniqueLetters.insert(c); // Insert the lowercase letter into the set
        }
    }

    if (uniqueLetters.size() == 26) { // Check if there are 26 unique letters
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
