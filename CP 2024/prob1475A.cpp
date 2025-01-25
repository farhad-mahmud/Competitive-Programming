#include <iostream>
using namespace std;

bool odd_divisor(long long n) {
    if (n <= 1) {
        return false;
    }
    while (n % 2 == 0) {
        n /= 2;
    }
    return n > 1;
}

int main() {
     int t ;
     cin >> t ;
     while(t--)
     {
         long long int n ;
         cin >> n ;


    if (odd_divisor(n)) {
              cout << "YES" << endl;

    }
    else {
        cout << "NO" << endl;

    }

     }

    return 0;
}
