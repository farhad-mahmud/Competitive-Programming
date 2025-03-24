#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void solve() {
    ll n, k;
    cin >> n >> k;
    
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

   

    ll  sum = 0;

    if (k == 1) {
        sum = a[0] + a[n - 1]; 
        for (ll i = 1; i < n - 1; i++) {
            sum = max({sum, a[i] + a[0], a[i] + a[n - 1]});
        }

        cout << sum << endl ;

            return ;
    } 
       
        sort(a.begin(),a.end() , greater<ll>()) ;

        for(int i=0;i<=k;i++){

               sum += a[i] ;
        }

    cout << sum << endl;
}

int32_t main() {
    FAST_IO;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
