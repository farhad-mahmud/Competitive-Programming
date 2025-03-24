#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll x;
    cin >> x;
    
     int bits = log2(x) ;
     int y =( pow(2 ,bits) -1 ) ;

     int d = (x^y) ;

        if (x + y > d && y + d > x && x + d > y ) { 
            cout << y << "\n";  
            return;
        }
    
 
    cout << "-1\n"; 
        
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
