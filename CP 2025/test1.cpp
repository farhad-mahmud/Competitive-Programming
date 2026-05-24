#include<bits/stdc++.h>
using namespace std;

const int N = 1e6 + 9, INF = 1e9;
int dp[N];
int coins[105];

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, target;
  if (!(cin >> n >> target)) return 0;
  for (int i = 0; i < n; i++) {
    cin >> coins[i];
  }
  for (int i = 1; i <= target; i++) {
    dp[i] = INF;
  }
  dp[0] = 0;
  for (int i = 1; i <= target; i++) {
    for (int j = 0; j < n; j++) {
      if (i >= coins[j]) {
        dp[i] = min(dp[i], 1 + dp[i - coins[j]]);
      }
    }
  }
  if (dp[target] >= INF) cout << -1 << '\n';
  else cout << dp[target] << '\n';
  return 0;
}