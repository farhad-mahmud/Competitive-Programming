

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

    // 4(n-1) escaping cells ..

    int h = (n * n) - k ;

    if (h == 1) {

        no ;
    }
    else {
        yes ;
        char grid[n + 1][n + 1] ;

        int cnt = 0 ;
        int x = 0 , y = 0 ;


        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {

                grid[i][j] = 'U' ;
                cnt++ ;
                if (cnt == k) {
                    x = i ;
                    y = j ;
                    break ;
                }
            }
        }

        int py = n - y ;
        int px = n - x ;
        if (px > 0) {

            int z = y + py ;
            for (int i = y + 1; i <= z; i++) {
                grid[x][i] = 'D' ;
            }

            int w = x + px ;
            for (int i = x + 1; i <= w; i++) {
                for (int j = 1; j <= n; j++) {

                    if (j == 1) {
                        grid[i][j] = 'R' ;
                    }
                    else {
                        grid[i][j] = 'L' ;
                    }
                }
            }
        }
        else if (px == 0) {

            int z = y + py ;
            grid[x][y + 1] = 'R' ;

            for (int i = y + 2 ; i <= z; i++) {

                grid[x][i] = 'L' ;
            }
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                cout << grid[i][j] ;
            }
            cout << nl ;
        }


    }
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
