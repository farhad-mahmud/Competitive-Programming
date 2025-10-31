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

void solve ()
{

   int n ; cin >> n ;
   vector<int > a(n); for (int i = 0; i < n; i++)cin >> a[i] ;

   unordered_map<int, int > cnt ;

   int ans = 0 ;
   int l = 0 ;

   for (int r = 0; r < n; r++) {

      cnt[a[r]]++ ;

      while (cnt[a[r]] > 1) {
         cnt[a[l]]-- ;
         l++ ;
      }

      ans += (r - l + 1) ;
      cerr << ans << nl ;
   }

   cout << ans  << nl ;

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
