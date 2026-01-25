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
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] >= x) cnt++;
    }

    if(cnt > bcnt || (cnt == bcnt && x > bx)) {
        bcnt = cnt;
        bx = x;
    }

    return cnt > 0;
}

void solve() {
    cin >> n;
    a.resize(n);  
    for(int i = 0; i < n; i++) cin >> a[i];

    vector<int> b(n);
    for(int i = 0; i < n; i++) cin >> b[i];

   
    bx = 0;
    bcnt = 0;

    int l = *min_element(a.begin(), a.end());
    int r = *max_element(a.begin(), a.end());

    while(l <= r) {
        int mid = (l + r) / 2;
        if(f(mid)) l = mid + 1;
        else r = mid - 1;
    }

    
    int max_score = 0;


    set<int> ss(a.begin(), a.end());
    for(int x : ss) {
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] >= x) cnt++;
        }

        int tmp = cnt;
        int lev = 0;
        for(int i = 0; i < n; i++) {
            if(tmp >= b[i]) {
                tmp -= b[i];
                lev++;
            } else break;
        }

        max_score = max(max_score, lev * x);
    }

    cout << max_score << nl;
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
