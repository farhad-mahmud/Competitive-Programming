#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;

        int loggedin = 0 ;

         int ans = 0 ;

         for(int i=0;i<n;i++){

                string s ; cin >> s;

                if(s == "login"){

                        loggedin = 1 ;
                }
                if(s == "logout"){

                        loggedin = 0 ;
                }

                if(s== "private"){

                      if(loggedin == 0){

                            ans += 1 ;
                      }
                }
         }

         cout << ans << endl; 
}


int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
