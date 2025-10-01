#include<bits/stdc++.h>
using namespace std;

int fibonacciness(int a1, int a2, int a4, int a5) {
    int maxFibonacciness = 0;


    for (int a3 = -100; a3 <= 100; ++a3) {
        int max_fib= 0;


        if (a3 == a1 + a2) {
            max_fib++;
        }
        if (a4 == a2 + a3) {
            max_fib++;
        }
        if (a5 == a3 + a4) {
            max_fib++;
        }


        maxFibonacciness = max(maxFibonacciness, max_fib);
    }

    return maxFibonacciness;
}

int main() {
    int t;
    cin >> t;

    while (t--) {

        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;


        int result = fibonacciness(a1, a2, a4, a5);
        cout << result << endl;
    }

    return 0;
}
