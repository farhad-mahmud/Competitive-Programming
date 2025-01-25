#include <bits/stdc++.h>
#include<cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        if (n <= 3) {
            cout << 1 << endl;

        } else {

            int k = (int)(log2(n) / 2);

            cout << (long long )pow(2,k) << endl;
        }
    }
    return 0;
}

