//---  Bismillahir Rahmanir Rahim ---//

//------------------------------//
//        Author: Farhad       //
//------------------------------//

#include <bits/stdc++.h>
using namespace std;

#define int  long long

#define nl       "\n"

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define all(x)   x.begin(),x.end()
#define allr(x)  x.rbegin() ,x.rend()
#define dbug(x) cerr << (#x) << " is " << (x) << nl;
#define output(a) for(auto &it: a) cerr<<it<<" "; cerr<<nl;

// constrains

const int N = 1e6 + 9;
const int MOD = 1e9 + 7;

bool vis[N] ;
vector<int> prime ;

int spf[N] ;
void sieve() {

   for (int i = 2; i < N; i++) {
      spf[i] = i;
   }
   for (int i = 2; i < N; i++) {
      if (spf[i] == i) {
         for (int j = i; j < N; j += i) {
            spf[j] = min(spf[j], i);
         }
      }
   }

}

vector<pair<int, int>> getFactorization(int x) {
   vector<pair<int, int>> res;
   while (x > 1) {
      int p = spf[x];
      int cnt = 0;
      while (x % p == 0) {
         x /= p;
         cnt++;
      }
      res.push_back({p, cnt});
   }
   return res;
}

void solve ()
{
   int n ; cin >> n ;

   map<int, int> exp ;

   for (int i = 2; i <= n; i++) {

      auto factors = getFactorization(i);

      for (auto [p, e] : factors) {

         exp[p] += e ;
      }
   }

   int fives = exp[5] ;

   cout << fives << nl;

}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;

   // cin >> t ;
   sieve() ;

   while (t--) {

      solve() ;

   }


   return 0;
}
