#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define ull unsigned long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define pb push_back
#define ff first
#define ss second
#define all(f) f.begin(), f.end()
#define rall(f) f.rbegin(), f.rend()
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define repr(i, a, b) for (int i = (a); i >= (b); --i)
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define nl cout << '\n';

const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const double PI = acos(-1);


int main() {
    FAST_IO;

    int t;
    cin >> t;
    while (t--) {
                  int a , b ;
                  cin >> a >> b ;
                  int d = 0 ;
                  int cnt = 0 ;

                  if(a<b)
                  {
                      d = b- a ;
                      if (d%2==0 && d >0)
                      {
                          cnt = 2 ;
                      }
                      else if(d%2!=0 && d>0)
                      {
                          cnt = 1 ;
                      }

                  }
                  else
                  {
                      d = a - b ;
                      if(d % 2 == 0 && d> 0)
                      {
                          cnt = 1 ;
                      }
                      else if(d % 2 != 0 && d> 0)
                      {
                          cnt = 2 ;
                      }
                  }

                  cout << cnt << endl;

    }

    return 0;
}

