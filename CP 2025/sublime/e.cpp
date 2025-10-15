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
   int n , c ; cin >> n >> c ;

   vector<int > b(n), d(n) ;
   for (int i = 0; i < n; i++) cin >> b[i] ;

   for (int i = 0; i < n; i++) cin >> d[i] ;

   int mn = 1e18 ;

   for (int i = 0 ; i < n; i++) {

      int cst = 1LL * i *  c ;
      for (int j = 0; j < n; j++) {

         int nxt = (j - i + n) % n ;

         cst += 1LL * b[j] * d[nxt] ;
      }

      mn = min(mn , cst) ;
   }

   cout << mn << nl ;


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
