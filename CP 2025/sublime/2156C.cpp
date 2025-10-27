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
   int n , k ; cin >> n >> k ;

   vector<int > v(n) ; for (int i = 0; i < n; i++)cin >> v[i] ;

   int cnt1 = all((v) , 1) ;

   if (cnt1 > k ) {
      cout << 1 << nl ;
      return ;
   }

   vector<int > v(n) ;

   for (int i = 0; i < n; i++) {
      if (v[i] != '1') {
         a.push_back(v[i]) ;
      }
   }

   // a array without any 1's ..

   k -= cnt1 ;
   // 1 gula erase kore disi ..

   vector<int > pref(n), suf(n) ;

   pref[0] = a[0] ;

   for (int i = 1; i < n; i++) {
      pref[i] = __gcd(pref[i - 1] , a[i])  ;
   }

   suf[n - 1] = a[n - 1] ;

   for (int i = n - 2; i >= 0 ; i--) {

      suf[i] = __gcd(suf[i + 1], a[i]) ;
   }

   int gc = 0 , mxgc = 0 ;

   int eg = 0 ;


   for (int i = 0; i < n; i++) { // gcd excluding ai ..
      if (i == 0) {
         gc = suf[i + 1] ;
         mxgc = max(gc, mxgc) ;
      }
      if (i == n - 1) {
         gc = pref[i - 1] ;
         mxgc = max(gc, mxgc) ;
      }
      else {
         gc = __gcd(pref[i - 1] , suf[i + 1])
      }

      int eg = __gcd(gc , a[i]) ;// gcd including ai ..

      if (gc < eg ) {


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
