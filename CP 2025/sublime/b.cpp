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
vector<int > ans ;
int k ;

bool f(int x) {

   //cerr << x << nl ;
   int kk = x ;
   for (int i = 0; i < k; i++) {
      int grp = x / a[i];
      int left = x - (grp * a[i]) ;

      x -= left ;
   }

   //cerr << " x " << x << nl;

   if (x == 2) {
      ans.push_back(kk) ;

   }
   return x > 2  ;

}
bool ff(int x) {

   //cerr << x << nl ;
   int kk = x ;

   for (int i = 0; i < k; i++) {
      int grp = x / a[i];
      int left = x - (grp * a[i]) ;

      x -= left ;
   }

   //cerr << " x " << x << nl;

   if (x == 2) {
      ans.push_back(kk) ;

   }
   return x >= 2;

}
void solve ()
{
   cin >> k ;

   for (int i = 0; i < k; i++) {
      cin >> a[i] ;
   }


   int l = 0 , r = 1e18 ;

   // int mx = 0 , mn = 0 ;
   //int ans = 0 ;

   while (l <= r) {

      int mid = (l + r) / 2 ;

      if (f(mid)) {

         //ans = mid ;
         r = mid - 1 ;

      }
      else {
         l = mid + 1 ;
      }
   }

   int l2 = 0 ; int r2 = 1e18 ;

   while (l2 <= r2) {
      int mid = (l2 + r2) / 2 ;

      if (ff(mid)) {

         r2 = mid - 1 ;
      }
      else {
         l2 = mid + 1 ;
      }
   }

   int mx = *max_element(all(ans)) ;
   int mn = *min_element(all(ans)) ;

   if (ans.size() == 0) {
      cout << -1 << nl ;
      return ;
   }
   cout << mn << ' ' << mx << nl;


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
