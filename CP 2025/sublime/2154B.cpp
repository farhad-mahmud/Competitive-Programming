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
   vector<int > a(n) ; for (int i = 0; i < n; i++) cin >> a[i] ;

   // min number of times op2 we need.

   vector<int > pref(n) ;



   pref[0] = a[0] ;

   for (int i = 1; i < n; i++) {
      pref[i] = max(pref[i - 1] , a[i] ) ;
   }

   //output(pref) ;

   int cst = 0 ;

   for (int i = 1; i < n; i++) {
      int dif = 0 ;
      if (i & 1) {
         //cerr << i << nl ;
         if (i != n - 1) {
            a[i] = pref[i] ;

            if (a[i - 1] >= a[i] && a[i] <= a[i + 1]) {
               int c1 = (a[i - 1] - a[i]) + 1 ;
               int c2 = (a[i + 1] - a[i]) + 1 ;
               a[i - 1] = a[i - 1] - c1 ;
               a[i + 1] = a[i + 1] - c2 ;
               cst += c1 + c2 ;
            }
            else if (a[i - 1] >= a[i]) {
               dif = (a[i - 1] - a[i]) + 1 ;
               a[i - 1] = a[i - 1] - dif ;
               cst += dif ;

            }
            else if (a[i + 1] >= a[i]) {

               dif = (a[i + 1] - a[i]) + 1 ;
               a[i + 1] = a[i + 1] - dif ;
               cst += dif ;

            }

         }
         else if (i == n - 1) {

            a[i] = pref[i] ;

            if (a[i - 1] >= a[i]) {
               dif = (a[i - 1] - a[i]) + 1 ;
               cst += dif ;
            }
         }

         //cerr << cst << nl;
      }
   }

   cout << cst << nl;

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
