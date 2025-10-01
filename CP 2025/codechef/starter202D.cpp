//------------------------------//
//        Author: Farhad       //
//------------------------------//

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define nl "\n"

void solve() {
    int n; 
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<int > b(n) ;

    b = a ;

    sort(b.begin(),b.end()) ;

    if(a== b){ 

         cout << -1 << nl ;
         return ;
     }

    for (int i = 0; i + 1 < n; i++) {
        if (a[i] > a[i+1]) {
            cout << i + 1 << " " << i + 2 << nl;
            return;
        }
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) solve();
    return 0;
}
