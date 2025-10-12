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

   vector<int >a(n) ; for (int i = 0; i < n; i++) cin >> a[i] ;

   sort(a.begin(), a.end()) ;
   output(a) ;

   int mx = a[n - 1] ;

   cerr << mx << nl ;

   vector<int > v ;
   int sum = 0 ;
   for (int i = 0; i < n; i++) {

      int dif = abs(mx - a[i]) ;

      v.push_back(dif) ;
      sum += dif ;
   }

   int gc = 0 ;

   output(v) ;
   for (int i = 0; i < n; i++) {

      gc = __gcd(v[i] , gc) ;
   }


   if (gc == 1) {

      int k = mx + 1
   }
   else {
      cout << (sum / gc) + 1 << nl ;
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
