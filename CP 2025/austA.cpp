#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long int
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define print(x) for(auto u:x) cout << u << ' '
#define trace(x) cout << #x << ' ' << x << '\n'

void solve() {
	int n; cin >> n;
	int ans = 0;
	int i = 1;
	while (n > 0) {
		ans++;
		n -= i;
		i++;
	}
	cout << ans << nl;

}

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin >> t;
	while (t--) solve();


	return 0;
}