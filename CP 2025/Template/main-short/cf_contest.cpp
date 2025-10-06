
//---  Bismillahir Rahmanir Rahim ---//

//------------------------------//
//        Author: Farhad       //
//------------------------------//

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


void solve ()
{
    int n , k ; cin >> n >> k ;

    string s ; cin >> s ;

    int cnt0 = 0 , cnt1 = 0 , cnt2 = 0 ;

    int sz = s.length() ;



    for (char c : s) {
        if (c == '0') {
            cnt0++ ;
        }
        else if (c == '1') {

            cnt1++ ;
        }
        else {
            cnt2++ ;
        }

    }


    if (n == 1 && cnt2 > 0 && cnt2 == sz) {

        cout << '-' << nl ;
        return ;
    }


    string ans(n, '+') ;

    for (int i = 0; i < cnt0; i++) {
        ans[i] = '-' ;
    }

    for (int i = 0; i < cnt1; i++) {

        ans[n - 1 - i] = '-';
    }


    int l = cnt0 ;
    int r = n - cnt1 - 1 ;

    int mid = r - l + 1 ;


    if (mid > 0 && cnt2 > 0) {
        for (int i = l; i <= r; i++) {

            if (i - l < cnt2 || r - i < cnt2) {
                ans[i] = '?';
            }
        }
    }


    cout << ans << nl ;


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
