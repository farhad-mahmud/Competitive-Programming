//---  Bismillahir Rahmanir Rahim ---//


#include <bits/stdc++.h>
using namespace std;

#define int  long long

#define nl       "\n"

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define all(x)   x.begin(),x.end()
#define allr(x)  x.rbegin() ,x.rend()
#define dbug(x) cerr << (#x) << " is " << (x) << nl;
#define output(a) for(auto &it: a) cerr<<it<<" "; cerr<<nl;

// constrains

const int N = 1e5 + 9;
const int MOD = 1e9 + 7;

void solve() {
    int n , q; cin >> n >> q ;

    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    
    vector<int> b(n);
    for(int i=0;i<n;i++) cin >> b[i];

    vector<int> c(n);
    c[n-1] = max(a[n-1], b[n-1]);
    
    for(int i=n-2;i>=0;i--) {
        c[i] = max(a[i], max(b[i], c[i+1]));
    }

    vector<int> pref_sum(n);
    pref_sum[0] = c[0];
    for(int i=1;i<n;i++) pref_sum[i] = pref_sum[i-1] + c[i];


    while(q--) {
        int l, r; cin >> l >> r;
        int ans = 0 ;
        l--,r--;
       // cerr << l << ' ' << r << nl ;
         ans = pref_sum[r] - (l > 0 ? pref_sum[l-1] : 0) ;

        cout << ans << ' ' ;
    }

      cout << nl; 
}
int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;

   cin >> t ;

   while (t--) {

      solve() ;

   }


   return 0;
}
