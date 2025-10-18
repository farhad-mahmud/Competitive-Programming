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

void solve (int k )
{
   int n ; cin >> n ;

   vector<int > a(n) ; for (int i = 0; i < n; i++)cin >> a[i] ;

   if (n == 1) {

      cout << "Case #" << k << ": " << a[0] << nl;
      return ;
   }

   //sort(a.begin(), a.end()) ;

   int ans = a[0] ;

   for (int i = 0; i < n - 1; i++) {
      int dif = 0 ;
      if (a[i] < a[i + 1]) {
         dif = abs(a[i] - a[i + 1]) ;
      }
      else if (a[i] > a[i + 1]) {
         int g = abs(a[i] - a[i + 1]) ;
         if (g > ans) {
            dif = a[i + 1] ;
         }
         else {

            dif = abs(a[i] - a[i + 1]) ;
         }
      }

      ans = max(dif , ans) ;
   }

   reverse(a.begin(), a.end()) ;

   //output(a) ;

   int ans2 = a[0] ;
   //cerr << ans2 << nl;

   for (int i = 0; i < n - 1; i++) {

      int dif = 0 ;
      if (a[i] < a[i + 1]) {
         dif = abs(a[i] - a[i + 1]) ;
         //cerr << dif << nl ;
      }
      else if (a[i] > a[i + 1]) {
         int g = abs(a[i] - a[i + 1]) ;

         //cerr << g << ' ' << ans2 << nl;
         if (g > ans2) {
            dif = a[i + 1] ;
         }
         else {

            dif = abs(a[i] - a[i + 1]) ;
         }
      }


      ans2 = max(dif , ans2) ;
      //cerr << ans2 << nl ;
   }



   cout << "Case #" << k << ": " << min(ans, ans2) << nl;
}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;

   cin >> t ;
   int k = 1 ;

   while (t--) {

      solve(k) ;
      k++ ;

   }


   return 0;
}
