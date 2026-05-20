#include <bits/stdc++.h>
using namespace std;

#define int  long long

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

    int n ; cin >> n ;

    vector<int > a(n) , b(n) ;

    for (int i = 0 ; i < n; i++) {

        cin >> a[i] >> b[i] ;

    }

    sort(a.begin() , a.end()) ;

    sort(b.begin() , b.end()) ;




    int cur = 0 ;
    int ans = 0 ;
    int i = 0, j = 0 ;

    while (i < n) {

        if (a[i] < b[j]) {

            cur++ ;
            ans = max(ans , cur) ;
            i++ ;

        }
        else {

            cur-- ;
            j++ ;

        }
    }

    cout << ans << nl;
}

int32_t main() {
    ios_base:: sync_with_stdio(0);
    cin.tie(0);

    int t = 1 ;

    // cin >> t ;

    while (t--) {

        solve() ;

    }


    return 0;
}
