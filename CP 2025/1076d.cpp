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
vector<int> a;  
int bx = 0;
int bcnt = 0;

bool f(int x) {

    int usable = n- lower_bound(a.begin(),a.end(),x)- a.begin() ;
    
}

void solve() {
    cin >> n;
    a.resize(n);  
    for(int i = 0; i < n; i++) cin >> a[i];

    vector<int> b(n);
    for(int i = 0; i < n; i++) cin >> b[i];

   
    bx = 0;
    bcnt = 0;   

    sort(a.begin(),a.end());


    int l = *min_element(a.begin(), a.end());
    int r = *max_element(a.begin(), a.end());

    while(l <= r) {
        int mid = (l + r) / 2;
        if(f(mid)) l = mid + 1;
        else r = mid - 1;
    }

    

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
