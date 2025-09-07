#include<bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long int
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define print(x) for(auto u:x) cout << u << ' '
#define trace(x) cout << #x << ' ' << x << '\n'

const int N = 1000 + 9;
int a[N][N];
int prefB[N][N];
int prefA[N][N];
int b[N][N];

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, p, q, k; cin >> n >> m >> p >> q >> k;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}

	for (int i = 1; i <= p; i++) {
		for (int j = 1; j <= q; j++) {
			cin >> b[i][j];
		}
	}

	// for (int i = 0; i < n; i++) {
	// 	for (int j = 0; j < m; j++) {
	// 		cout << a[i][j] << ' ';
	// 	}
	// 	cout << nl;
	// }

	// for (int i = 0; i < p; i++) {
	// 	for (int j = 0; j < q; j++) {
	// 		cout << b[i][j] << ' ';
	// 	}
	// 	cout << nl;
	// }

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			prefA[i][j] = prefA[i - 1][j] & prefA[i][j - 1] & prefA[i - 1][j - 1] & a[i][j] ;
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			prefB[i][j] = prefB[i - 1][j] | prefB[i][j - 1] | prefB[i - 1][j - 1] | b[i][j] ;
		}
	}

	// int Aand = a[0][0];
	// int Bor = b[0][0];
	int mxAnd = 0;
	int mxOr = LLONG_MAX;
	for (int i = 1; i < k; i++) {
		for (int j = 1; j < k; j++) {
			sub = pref
			      mxAnd = max(sub, mxAnd);

		}
	}


	for (int i = 1; i < k; i++) {
		for (int j = 1; j < k; j++) {
			Bor = Bor | b[i][j];
		}
	}

	cout << (Aand ^ Bor) << nl;


	return 0;
}