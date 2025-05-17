#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;

    while (cin >> n) {
        vector<int> v(n);
        vector<int> v2;

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        for (int i = 0; i < n; i++) {
            int sum = 0;

            for (int j = 0; j < v[i]; j++) {
                int a;
                cin >> a;
                sum += a * 5;
            }

            int total = sum + v[i] * 15;
            v2.push_back(total);
        }

        int result = *min_element(v2.begin(), v2.end());
        cout << result << endl;
    }

    return 0;
}
