#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    int value = 0;

    for (int i = 0; i < n; i++) {
        string statement;
        cin >> statement ;


        if (statement == "++X" || statement == "X++") {
            value++;
        } else if (statement == "--X" || statement == "X--") {
            value--;
        }
    }


    cout << value << endl;

    return 0;
}
