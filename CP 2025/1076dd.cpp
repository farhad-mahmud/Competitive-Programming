//---  Bismillahir Rahmanir Rahim ---//

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define nl "\n"
#define all(x) x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend()

// constrains
const int N = 2e5 + 9;
const int MOD = 1e9 + 7;

int n;
// vector<int> a;  
int bx = 0;
int bcnt = 0;

void solve() {
    cin >> n;
    vector<int > a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    vector<int> b(n);
    for(int i = 0; i < n; i++) cin >> b[i];

   
    bx = 0;
    bcnt = 0;   

    sort(a.begin(),a.end());

    vector<int > pref_sum(n);

    pref_sum[0] = b[0];
    for(int i=1;i<n;i++){
         pref_sum[i] = pref_sum[i-1] + b[i];
    }

    int mx =0 ;
    for(int i=0;i<n;i++){
         int x = n - (lower_bound(a.begin(),a.end(),a[i])- a.begin());

         int lev = upper_bound(pref_sum.begin(), pref_sum.end(),x) - pref_sum.begin();

         int ans = a[i]*lev ;
        // cerr << x << ' ' << lev << nl; 
         mx = max(mx , ans) ;
    }


    cout << mx << nl ;

}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}
