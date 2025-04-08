#include <bits/stdc++.h>
using namespace std;

using ll   =  long long;
using ull  =  unsigned long long;
using ld   =  long double;

#define endl            '\n'
#define all(x)          (x).begin(), (x).end()
#define rall(x)         (x).rbegin(), (x).rend()
#define point(x)        fixed << setprecision(x)
#define FastIo          ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define sz(x)           (int)x.size()

const ld pi = acos(-1);

void Plz_Ac() {
  string s; cin >> s;
  ll cnt = 0LL;
  ll mx = LLONG_MIN;

  ll cnt2 = 0 ;
  for (int i = 0; i < sz(s); i++) {
    if (s[i] == '0')cnt++;
    if (s[i] != '0') {
          ll temp = cnt + 1;
      mx = max(mx, temp);
    }
  }

   
   
  ll ans = sz(s) - mx;
  cout << ans << endl;
}

int main() {
  FastIo;
  int test = 1;
  cin >> test;
  while (test--) {
    Plz_Ac();
  }
  return 0;
}