#include <iostream>
#include <cmath>
using namespace std;

bool prime(long long int n) {
    if (n < 2) return false;
    for (long long int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    long long int arr[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; ++i) {
        long long int sq = sqrt(arr[i]);
        if (sq * sq == arr[i] && prime(sq)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
