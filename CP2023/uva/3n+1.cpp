#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    int p[n];
    int max = 0;

    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    for (int i = 0; i < n; i++) {
        if (p[i] > max) {
            max = p[i];
        }

        if (p[0] < max) {
            ans = (max - p[0]) + 1;
        } else if (p[0] > p[i]) {
            ans = 0;
        } else if (p[0] == max) {
            ans = 1;
        }
    }

    cout << ans << endl;

    return 0;
}
