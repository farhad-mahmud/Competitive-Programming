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

const int N = 2e5 + 9;
const int MOD = 1e9 + 7;
const int MAX = 2e14 ;

void solve ()
{
   int n ; cin >> n ;
   int a[n] ;
   for (int i = 0; i < n; i++) cin >> a[i] ;

   sort(a, a + n) ;
   int ans = MAX ;
   for (int c = 1; ; c++) {
      int ops = 0 ;
      vector<__int128> pw(n);
      pw[0] = 1 ;

      for (int i = 1; i < n; i++) {
         pw[i] = (pw[i - 1] * c);
      }

      if (pw[n - 1] > MAX) break ;

      for (int i = 0; i < n; i++) {

         ops += abs(a[i] - (long long)pw[i]) ;

         if (ops > MAX) break ;
      }

      ans = min(ans , ops) ;
   }

   cout << ans << nl;
}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;

   // cin >> t ;

   while (t--) {

      solve() ;

   }


   return 0;
}
