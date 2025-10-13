/*
  In the name of Allah, the Most Gracious, the Most Merciful.
*/
//ceil : (a + b - 1) / b
#include <bits/stdc++.h>
using namespace std;

#define nl          '\n'
#define int         long long int
#define all(x)      x.begin(), x.end()
#define allr(x)     x.rbegin(), x.rend()
#define print(x)    for (auto u : x) cout << u << ' '
#define trace(x)    cout << #x << ": " << x << " \n";

void solve() {

  int n ; cin >> n ;

  vector<int > b(n) ; for (int i = 0; i < n; i++)cin >> b[i] ;


  int prev = 0 ;

  vector<int > a ;
  int nw = n ;
  vector<int > pref(n + 1, 0) ;

  for (int i = 0; i < n; i++) {
    int k = i + 1 ;
    int d = b[i] - prev  ;
    int t = k - d ;

    if (t == 0) {

      a.push_back(nw) ;
      pref[k] = nw ;
      nw-- ;
    }
    else {

      int v = pref[t] ;
      a.push_back(v) ;
      pref[k] = v ;
    }

    prev = b[i] ;
  }

  for (auto i : a) {
    cout << i << ' ' ;
  }

  cout << nl ;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while (t--) {
    solve();
  }
}