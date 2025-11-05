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


void solve ()
{
   int n ; cin >> n ;

   int ans = 9  ;

   int i = 7 ;

   vector<tuple<int, int, int>> p ;

   if (n == 1) {
      cout << 4 << nl ;
      return ;
   }
   if (n == 2) {
      cout << 7 << nl;
      return ;
   }
   if (n == 3) {
      cout << 10 << nl;
      return ;
   }
   if (n == 4) {
      cout << 12 << nl ;
      return  ;
   }
   if (n == 6) {
      cout << 17 << nl ;
      return  ;
   }
   if (n == 7) {
      cout << 20 << nl ;
      return  ;
   }
   if (n == 8) {
      cout << 22 << nl ;
      return  ;
   }
   if (n == 9) {
      cout << 24 << nl ;
      return  ;
   }

   int cst = 15 ;
   int prev = 5 ;
   p.push_back({5, 15 , 3}) ;
   int k = 0 ;
   while (k < n) {
      ans += i ;
      k = ans - i ;
      int j = i / 2 ;
      k += 1 ;
      cst += ((k - prev - 2) * 2) + 6 ;

      p.push_back({k , cst , j}) ;
      prev = k ;
      i += 2 ;

   }


   int sz = p.size() ;

   for (int i = 0; i + 1 < sz ; i++) {
      auto [k1, cst1, j1] = p[i];
      auto [k2, cst2, j2] = p[i + 1];

      if (n == k1) {
         cout << cst1 << nl;
         return ;
      }
      else if (n == k2) {
         cout << cst2 << nl;
         return  ;
      }
      else if (n > k1 && n < k2) {


         int cc = cst1 + 2 ;

         for (int j = k1 + 1; j < k2 ; j++) {

            if (n == j) {
               cout << cc << nl;
               return ;
            }

            if (j == (k1 + 1 + (j1 - 2))) {
               cc += 3 ;


            }
            else {
               cc += 2 ;
            }

         }

      }
   }


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
