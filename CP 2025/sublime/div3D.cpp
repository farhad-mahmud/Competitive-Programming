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



int f (vector<pair<int, int >> &g , int n, int px, int py) {

   int mx_x = 0, mn_x = 1e18, mx_y = 0, mn_y = 1e18 ;
   for (auto [x, y] : g) {

      if (x == px && y == py) {
         continue ;
      }

      mn_x = min(x, mn_x) ;
      mx_x = max(x, mx_x) ;

      mn_y = min(y, mn_y);
      mx_y = max(y , mx_y) ;

   }

   int a = abs((mx_x - mn_x) + 1 ) ;
   int b = abs(mx_y - mn_y + 1) ;

   //cerr << " a " << a << ' ' << b << nl ;
   int area = a * b ;

   // cerr << "area " << area << nl ;

   if (n > area) {
      area += min(abs(mx_x - mn_x + 1 ) , abs(mx_y - mn_y + 1 )) ;

   }

   return area ;



}
void solve ()
{
   int n ; cin >> n ;

   vector<pair<int, int >> g ;

   int mx_x = 0, mn_x = 1e18, mx_y = 0, mn_y = 1e18 ;

   for (int i = 0; i < n; i++) {
      int x, y ; cin >> x >> y ;

      g.push_back({x, y}) ;

      mn_x = min(x, mn_x) ;
      mx_x = max(x, mx_x) ;

      mn_y = min(y, mn_y);
      mx_y = max(y , mx_y) ;

   }

   if (n == 1) {
      cout << 1 << nl ;
      return ;
   }
   int cnt_mx_x = 0, cnt_mx_y = 0, cnt_mn_y = 0, cnt_mn_x = 0 ;

   vector<pair<int, int >> k ;

   for (auto [x, y] : g) {

      if (x == mx_x) {
         cnt_mx_x++ ;
      }
      if (x == mn_x) {

         cnt_mn_x++ ;
      }
      if (y == mx_y) {
         cnt_mx_y++ ;
      }
      if (y == mn_y) {
         cnt_mn_y++;
      }
   }


   for (auto [x, y] : g) {

      if (cnt_mx_x == 1 && x == mx_x) {

         k.push_back({x, y}) ;
      }
      if (cnt_mn_x == 1 && x == mn_x) {

         k.push_back({x, y}) ;
      }
      if (cnt_mx_y == 1 && y == mx_y) {

         k.push_back({x, y}) ;
      }
      if (cnt_mn_y == 1 && y == mn_y) {

         k.push_back({x, y}) ;
      }


   }

   int ans = abs(mx_x - mn_x + 1 ) * abs(mx_y - mn_y + 1 ) ;

   for (auto [x, y] : k) {

      ans = min(ans , f(g , n , x, y)) ;
   }


   cout << ans << nl;





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
