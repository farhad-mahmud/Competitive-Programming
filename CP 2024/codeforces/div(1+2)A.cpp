#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }


        sort(arr.begin(), arr.end(), [](long long a, long long b) {
            return (a % 2 == 0) && (b % 2 != 0);
        });

        long long sum = 0;
        int points = 0;

        for (int i = 0; i < n; i++) {
            sum += arr[i];

            if (sum % 2 == 0) {
                points++;
                while (sum % 2 == 0) {
                    sum /= 2;
                }
            }
        }

        cout << points << endl;
    }
    return 0;
}
