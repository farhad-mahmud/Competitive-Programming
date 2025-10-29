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
   int n , k ; cin >> n >> k ;

   string s ; cin >> s ;

   int x = n - (k * 2) ;

   int cnt1 = count(all(s), '1') ;

   int cnt0 = count(all(s) , '0')  ;


   if (cnt1 * 2 < x || cnt0 * 2 < x) {
      no ;
   }
   else {

      cnt1 -= x / 2 ;
      cnt0 -= x / 2 ;

      if (cnt1 % 2 == 0 && cnt0 % 2 == 0) {
         yes;
      }
      else {
         no ;
      }
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
