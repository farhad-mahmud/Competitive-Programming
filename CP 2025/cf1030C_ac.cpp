#include <bits/stdc++.h>
using namespace std;

#define ll  long long

#define nl       "\n" 

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
// Constants
const int N = 1e5 + 9;
const int MOD = 1e9 + 7;


void solve ()
{
      
    int n;
    ll k;
    cin >> n >> k;

    vector<ll> a(n + 1), bit(64, 0);

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        for (int j = 0; j < 63; j++) {
            if ((a[i] >>  j) & 1 ) {
                bit[j]++;
            }
        }
    }

    ll ans = 0;
    for (int i = 0; i < 63; i++) {
        ans += bit[i];
    }

    for (int i = 0; i < 63; i++) {

        if (k < (1LL << i)) break;

        if (bit[i] == n) continue;

        ll cost = (1LL << i);
        ll can_add = min(1LL * (n - bit[i]), k / cost);

        ans += can_add;
        k -= can_add * cost;
    }

    cout << ans << nl;
         
       
}


int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

         cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
