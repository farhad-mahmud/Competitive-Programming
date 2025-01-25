#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> x(n);


        for (int i = 0; i < n; ++i) {
            cin >> x[i];
        }


        sort(x.begin(), x.end());

        int score = 0;
        int left = 0, right = n - 1;


        while (left < right) {
            int sum = x[left] + x[right];

            if (sum == k) {

                score++;
                left++;
                right--;
            } else if (sum < k) {

                left++;
            } else {
                right--;
            }
        }

        cout << score << endl;
    }

    return 0;
}
