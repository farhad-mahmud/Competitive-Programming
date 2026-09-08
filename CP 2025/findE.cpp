#include <iostream>

using namespace std;

long long gcd(long long a, long long b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main() {
    long long p = 11;
    long long q = 17;
     
    long long phi = 160;
    long long limit = 50; 

    for (long long e = 3; e < 10; e++) {
        if(gcd(e, phi)!=1)continue ;

        for (long long i = 1; i <= 5; i++) {
            if ((i * phi + 1) % e == 0) {
                long long d = (i * phi + 1) / e;
                cout << "e = " << e << " (i = " << i << ") -> d = " << d << "\n";
                break;
            }
        }

    }
    cout << "\n";

    return 0;
}