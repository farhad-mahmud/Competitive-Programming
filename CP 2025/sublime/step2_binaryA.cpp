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
int w, h , n ;

bool f(int x) {
   int a = (x / w) ;
   int b = (x / h) ;

   return a * b >= n ;
}
void solve ()
{
   cin >> w >> h >> n ;

   int l = 0 ;
   int r = 1 ;

   // we keep doubling r until we find a r , that
   // f(r) = true ,when we find a r that means
   // between that r and the previos r/ 2 value
   // we will find our minimum side of the square ..
   while (!f(r)) {
      r *= 2 ;
   }

   int ans = 0 ;

   while (l <= r) {
      int mid = (l + r) / 2 ;

      if (f(mid)) {

         r = mid - 1;
         ans = mid ;

      }
      else {
         l = mid + 1 ;
      }
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
