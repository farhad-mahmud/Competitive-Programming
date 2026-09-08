#include <iostream>

using namespace std;

long long extgcd(long long a, long long b, long long &x, long long &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    long long x1, y1;
    long long g = extgcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return g;
}

long long modpow(long long base, long long exp, long long mod) {
    long long res = 1;
    base %= mod;
    while (exp > 0) {
        if (exp % 2 == 1) res = (__int128)res * base % mod;
        base = (__int128)base * base % mod;
        exp /= 2;
    }
    return res;
}

int main() {
    long long p = 11;
    long long q = 17;
    long long e = 3 ;
    long long m = 98 ;


    // for(int i=e;i<=17;i+=2){
          
    // }
    long long n = p * q;
    long long phi = (p - 1) * (q - 1);

    long long x, y;
    extgcd(e, phi, x, y);

    cerr << x << endl; 

    long long d = (x % phi + phi) % phi;

    long long c = modpow(m, e, n);

    long long dec = modpow(c, d, n);



    cout << "n = " << n << "\n";
    cout << "phi = " << phi << "\n";
    cout << "d = " << d << "\n";
    cout << "Encrypted (c) = " << c << "\n";
    cout << "Decrypted (m) = " << dec << "\n";

    return 0;



}