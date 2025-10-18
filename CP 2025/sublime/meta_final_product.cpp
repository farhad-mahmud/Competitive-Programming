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

const int N = 1e5 + 9 ;
const int MOD = 1e9 + 7;

// for prime expo info / factorize many number quickly
int spf[N] ;

void sieve() {
   for (int i = 2; i < N; i++) spf[i] = i;
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

void solve (int k ) {
   int n , a , b ; cin >> n >> a >> b ;
   auto factors = getFactorization(b) ;

   vector<int > pw ;
   for (auto [p, cnt] : factors) {
      for (int i = 0; i < cnt ; i++) {
         pw.push_back(p) ;
      }
   }

   vector<int > ans(2 * n, 1) ;

   int sz = pw.size();

   int c = 1 ;
   for (int i = 0; i < n; i++) {
      for (int j = 0; j < sz; j++) {
         if (c * pw[j] <= a) {
            c *= pw[j] ;
            ans[i] *= pw[j] ;
            swap(pw[j], pw.back());
            pw.pop_back();
            break ;
         }
      }
   }

   int i = n ;
   for (auto v : pw) {

      if (i >= 2 * n) {
         break ;
      }
      ans[i] *= v ;
      i++ ;
   }

   cout << "Case #" << k << ": " ;
   for (auto x : ans) {
      cout << x << ' ' ;
   }
   cout << nl;
}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   sieve();

   int t = 1 ;
   cin >> t ;
   int k = 1 ;
   while (t--) {
      solve(k) ;
      k++ ;
   }
   return 0;
}
