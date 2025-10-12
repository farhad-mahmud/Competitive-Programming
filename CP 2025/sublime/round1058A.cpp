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

  vector<int > a(n) ; for (int i = 0; i < n; i++)cin >> a[i] ;

  map<int , int > freq;

  set<int > st ;

  for (int i = 0; i < n; i++) {

    freq[a[i]]++ ;
    st.insert(a[i]) ;
  }

  for (auto [i, j] : freq) {

    st.insert(i) ;

  }

  int mex = 0 ;
  for (int x : st) {
    if (x == mex) mex++ ;
    else if (x > mex) break ;
  }


  cout << mex << nl ;

}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while (t--) {
    solve();
  }
}