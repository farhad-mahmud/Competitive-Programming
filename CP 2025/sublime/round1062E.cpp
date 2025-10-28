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

int n , k , x ;

vector<int > te ;
bool f(int x) {
   int t = 0 ;
   int i = 0 ;

   if (k >= n) {
      return true ;
   }

   while (i < n ) {
      t++ ;

      int pos = a[i] + x ;
      cerr << pos << nl ;
      te.push_back(pos) ;

      while (i < n && abs(a[i] - pos) <= x) {
         i++ ;
      }

      if (t > k) {
         return false ;
      }
   }
   return true ;
}
void solve ()
{

   cin >> n >> k >> x ;

   int l = 0 , r = x ;
   // min distances..

   sort(a, a + n) ;

   int ans = 0  ;

   while (l <= r) {
      int mid = (l + r) / 2 ;
      if (f(mid)) { // can we place k teleports with min dis >= mid

         l = mid + 1 ;
         ans = mid ;
      }
      else {
         r = mid - 1 ;
      }

   }

   for (auto i : te) {
      cout << i << nl ;
   }

   cout << ans << nl ;
}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;

   cin >> t ;

   while (t--) {

      solve() ;

   }


   return 0;
}
