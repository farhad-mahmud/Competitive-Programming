#include<bits/stdc++.h>
#define ll long long
#define nn '\n'
#define spc " "
using namespace std;
int main() {
    ll t;
    cin >> t;
    while (t>0) {
            ll a,b,c,d;
        cin >> a >> b >> c >> d;
        if (a == b && b == c && c == d && d == a && a * a + b * b == c * c + d * d) {
            cout<< "square" <<nn;
        }
        else if ((a == c && b == d) || (a == b && c == d) || (a == d && b == c)) {
            cout << "rectangle" <<nn;
        }
        else if ((a + b) >= c && (b + c) >= d && (c + d) >= a && (d + a) >= b) {
            cout << "quadrangle" <<nn;
        }
        else {
            cout << "banana" <<nn;
        }
        t--;
    }
    return 0;
}
