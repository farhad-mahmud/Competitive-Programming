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
   int a, b ; cin >> a >> b ;

   if (a == b) {
      cout << 0 << nl ;
      return ;
   }


   int x = (a ^ b) ;
   //cerr << x << nl;

   if (x > 2 * a) {
      cout << -1 << nl;
      return ;
   }

   if (x <= a) {
      cout << 1 << nl ;
      cout << x << nl;

   }
   else {


      int x1 = 0;
      for (int i = 0; i < 64; i++) {
         if ((x >> i) & 1) { // if ith bit is 1 ..
            int c = x1 | (1LL << i); // add bit i to x1..
            int a1 = a ^ c;   // new a after xor c ..
            int x2 = x ^ c;
            if (c <= a && x2 <= a1) {
               x1 = c;
            }
         }
      }


      int a1 = a ^ x1;
      int x2 = x ^ x1;
      //       9^4^11 ..
      cerr << ((a ^ x1)^x2) << nl ;
      if (x1 == 0 || x2 == 0 || x1 > a || x2 > a1) {
         cout << -1 << nl;
         return;
      }

      cout << 2 << nl;
      cout << x1 << ' ' << x2 << nl;
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
