//--- Bismillahir Rahmanir Rahim ---//

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define nl "\n"
#define yes cout << "YES\n";
#define no cout << "NO\n";

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> p(n+1), a(n+1), pos(n+1);
        for(int i=1; i<=n; i++) cin >> p[i];
        for(int i=1; i<=n; i++) cin >> a[i];

        // Store original positions in permutation
        for(int i=1; i<=n; i++) pos[p[i]] = i;

        bool ok = true;
        int prev_pos = -1;  // position of previous distinct value in 'a'

        for(int i=1; i<=n; i++) {
            if(i == 1 || a[i] != a[i-1]) {
                int cur_pos = pos[a[i]];
                if(cur_pos < prev_pos) {
                    ok = false;
                    break;
                }
                prev_pos = cur_pos;
            }
        }

        if(ok) yes
        else no
    }

    return 0;
}
