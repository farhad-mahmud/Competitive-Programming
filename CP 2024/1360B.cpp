#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define ull unsigned long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define pb push_back
#define ff first
#define ss second
#define all(f) f.begin(), f.end()
#define rall(f) f.rbegin(), f.rend()
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define repr(i, a, b) for (int i = (a); i >= (b); --i)
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define nl cout << '\n';

const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const double PI = acos(-1);

int main() {
    FAST_IO;

    int t;
    cin >> t;
    while (t--) {
              int n ;
              cin >> n ;
              int s[n] ;
              for(int i=0;i<n;i++)
              {
                   cin >> s[i] ;

              }
              vector <int > f ;
              sort(s,s+n) ;

              for(int i=0;i<n-1;i++)
              {

                   f.pb(s[i+1]-s[i]);
              }


            int ans = *min_element(all(f)) ;

            cout << ans << endl;
    }

    return 0;
}
