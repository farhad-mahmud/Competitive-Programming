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
   int n , m , x , y ; cin >> n >> m >> x >> y ;

   vector<int > a(n) ;

   for (int i = 0; i < n; i++) cin >> a[i] ;

   vector<int > b(m);

   for (int i = 0; i < m; i++) cin >> b[i] ;



   int cnt1 = 0 ;

   int cnt2 = 0 ;

   for (int i = 0; i < n; i++) {

      if (a[i] < y ) {

         cnt1++ ;
      }
   }

   for (int i = 0; i < m; i++) {

      if (b[i] < x) {

         cnt2++ ;
      }
   }


   cout << cnt1 + cnt2 << nl;


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
