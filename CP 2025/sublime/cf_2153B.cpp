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
   int x, y, z ; cin >> x >> y >> z ;

   int a = 0, b = 0 , c = 0 ;

   for (int i = 0; i < 30; i++) {

      if ((x >> i) & 1) {

         a |= (1LL << i) ;
         b |= (1LL << i);
      }
      if ((y >> i) & 1) {
         b |= (1LL << i) ;
         c |= (1LL << i) ;
      }
      if ((z >> i) & 1) {
         a |= (1LL << i) ;
         c |= (1LL << i) ;
      }
   }

   if ((a & b) == x && (b & c) == y && (a & c) == z) {
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
