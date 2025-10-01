#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<string, int> nameCount; // To keep track of occurrences of each string

    for (int i = 0; i < n; i++) {
        string input;
        cin >> input;

        if (nameCount.find(input) == nameCount.end()) {
            // String is new
            cout << "OK" << endl;
            nameCount[input] = 1; // Initialize the count for this string
        } else {
            // String already exists
            cout << input << nameCount[input] << endl;
            nameCount[input]++; // Increment the count for this string
        }
    }

    return 0;
}

