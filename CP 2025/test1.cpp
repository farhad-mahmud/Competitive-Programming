#include<bits/stdc++.h>
using namespace std;

const int N = 1e6 + 9, INF = 1e9;
int memo[N];
int coins[105];
int num_coins;

int solve(int n) {
  if (n == 0) return 0;
  if (memo[n] != -1) return memo[n];
  int ans = INF;
  for (int i = 0; i < num_coins; i++) {
    if (n >= coins[i]) {
      ans = min(ans, 1 + solve(n - coins[i]));
    }
  }
  return memo[n] = ans;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int target;

  cin >> target >> num_coins ;

  for (int i = 0; i < num_coins; i++) {
    cin >> coins[i];
  }
  memset(memo, -1, sizeof memo);
  int result = solve(target);
  if (result >= INF) cout << -1 << '\n';
  else cout << result << '\n';
  return 0;
}