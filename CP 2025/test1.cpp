#include <bits/stdc++.h>
using namespace std;

#define int long long
const int N = 1e6 + 7;
const int MOD = 1e9 + 7;

int n,x; 

int dp[105][N] ;
int c[105] ;

int f(int i, int cur_val) {
    if (cur_val == 0) return 1;
    if (cur_val < 0 || i > n ) return 0;
    if (dp[i][cur_val] != -1) return dp[i][cur_val];

    // nibo na..
    int ans = f(i+1 , cur_val) ;

    // nibo..
    if(cur_val >= c[i]){

    ans += f(i ,cur_val - c[i]) ;

    }

    return dp[i][cur_val] = ans;
}

void solve() {
    cin >> n >> x;
    for(int i=1;i<=n;i++){
          cin >> c[i] ;
      }
    memset(dp, -1, sizeof dp);
    cout << f(1,x) << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}