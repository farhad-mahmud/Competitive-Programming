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
const int N = 1e5 + 9;
const int MOD = 1e9 + 7;

int a[N] ;

int n , c ;
bool f(int d) {

   set<int > st ;
   for (int i = 0; i < n; i++) {
      st.insert(a[i]) ;
   }

   int cnt = 1 ;
   int prev = a[0] ;
   cerr << "d " << d << nl ;
   while (!st.empty()) {
      int k = prev + d ;
      auto it = st.lower_bound(k)  ;
      if (it != st.end()) {
         cnt++ ;
         st.erase(prev) ;
         prev = *it ;
      }
      else {
         break ;
      }

      cerr << "cnt " << cnt << nl ;
      if (cnt >= c) {
         return true ;
      }

   }

   return false ;
}
void solve ()
{
   cin >> n >> c ;

   for (int i = 0; i < n; i++)cin >> a[i] ;


   sort(a, a + n) ;

   int d = a[n - 1] - a[0] ;

   int l = 0 ; int r = d;

   // d distance nie , c ta cow atano jay kina..

   int ans = 0 ;
   while (l <= r) {
      int mid = (l + r) / 2 ;
      if (f(mid)) {
         ans = mid ;
         l = mid + 1 ;
      }
      else {
         r = mid - 1 ;
      }
   }

   cout << ans << nl ;
}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;

   //cin >> t ;

   while (t--) {

      solve() ;

   }


   return 0;
}
