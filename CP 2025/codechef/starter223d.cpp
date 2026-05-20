//---  Bismillahir Rahmanir Rahim ---//

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define nl "\n"

void solve() {  
    int n; 
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    vector<int> hash(n+2, 0);  
    int cnt = 0;

    for(int i = 0; i < n; i++){
        int need = a[i] - 1; 

        if(a[i] == 1) {
            cnt++;
            hash[1]++;
        } else if(hash[need] > 0) {  
            cnt++;
            hash[a[i]]++;
        }
       
    }

    cout << cnt << nl;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}
