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

   if (n == 0) {
      yes ;
      return ;
   }

   // construct a , b ;

   bool f = false ;

   for (int i = 0; i < 63 ; i++) {
      int a = 0, b = 0 ;
      for (int j = 0; j <= i ; j++) {

         if (!((n >> j) & 1)) { // if jth bit of n is 0

            a |= (1LL << j) ;  // 1
            a |= (1LL << (i - j)); // 1
            b |= (1LL << j);  // setted to 1
            b |= (1LL << (i - j)) ; // setted to 1

            // this block ensures xoring a^b == 0 .
         }
         else {

            a |= (1LL << j); // 1
            b |= (1LL << (i - j)); // 1
            b = (b & (~(1LL << (j)))); // 0
            a = (a & (~(1LL << (i - j)))); // 0

         }
      }
      if ((a ^ b) == n) {
         f = true ;
         break ;
      }

   }

   if (f) {
      yes ;
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
