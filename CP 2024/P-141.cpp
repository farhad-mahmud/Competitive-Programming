#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string G, H, letter;
    getline(cin, G);
    getline(cin, H);
    getline(cin, letter);


    if (G.length() + H.length() != letter.length()) {
        cout << "NO" << endl;
        return 0;
    }


    string combined = G + H;


    sort(combined.begin(), combined.end());
    sort(letter.begin(), letter.end());


    if (combined == letter) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
