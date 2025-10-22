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

//int n ; cin >> n ;
//vector<int > a(n) ; for (int i = 0; i < n; i++) cin >> a[i] ;


void solve ()
{
   int x, y ; cin >> x >> y ;

   int sv = 0  ; int so = 0  ;

   for (int i = x ; i <= y; i++) {
      if (i % x == 0) {

         if (i % 2 == 0) {
            sv += i ;
         }
         else {
            so += i ;
         }
      }
   }

   if (sv >= so) {
      yes;
   }
   else {
      no ;
   }
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
