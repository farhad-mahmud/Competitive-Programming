#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   (x.begin(),x.end()) ;
const int  MOD = 1e9 + 7;
void solve() {
    int n, s, t;
    cin >> n >> s >> t;

    vector<int> p(n);

    for (int i = 0; i < n; i++) {
        cin >> p[i];
        p[i]--; 
    }

    s--; t--; 

    for (int i = 0; i <= n; i++) {
        if (s == t) {
            cout << i << '\n';
            return;
        }
        s = p[s];
    }

    cout << -1 << '\n';
}




int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

         //cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
