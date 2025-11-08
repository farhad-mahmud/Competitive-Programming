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

void solve() {
   int n , k ; cin >> n >> k ;

   vector<int > a(n) ; for (int i = 0; i < n; i++)cin >> a[i] ;

   sort(all(a)) ;
   int mex = 0 ;
   map<int, int > mp ;
   for (auto i : a) {
      mp[i]++ ;
      if (i == mex) {
         mex++ ;
      }
   }
   int sum1 = 0 ;
   for (int i = 0; i < n; i++) {
      int g = a[i] ;
      if (mp[g] == 1 && a[i] < mex) {
         sum1 += a[i];     // sum of mex..
         v1[i] = a[i] ; // new mex  , a[i] ..
      }
      else {
         sum1 += mex ;    // sum of mex ..
         v1[i] = mex ;   // new mex will be prev mex..
      }
   }
   // new ans vector = v1..

   mp.clear() ;
   mex = 0 ;
   sort(all(v1)) ;
   for (auto i : v1) {
      mp[i]++ ;
      if (i == mex) {
         mex++ ;
      }
   }

   int sum2 = 0 ;
   for (int i = 0; i < n; i++) {
      int g = v1[i] ;
      if (mp[g] == 1 && v1[i] < mex) {
         sum2 += v1[i] ;
         v2[i] = v1[i] ;
      }
      else {
         sum2 += mex ;
         v2[i] = mex ;
      }
   }

   mp.clear() ;
   mex = 0 ;
   sort(all(v2)) ;
   for (auto i : v2) {
      mp[i]++ ;
      if (i == mex) {
         mex++ ;
      }
   }
   int sum3 = 0 ;
   for (int i = 0; i < n; i++) {
      int g = v2[i] ;
      if (mp[g] == 1 && v2[i] < mex) {
         sum3 += v2[i] ;
         v3[i] = v2[i] ;
      }
      else {
         sum3 += mex ;
         v3[i] = mex ;
      }
   }

   if (k == 1) {
      cout << sum1 << nl;
      return ;
   }
   if (k >= 2 ) {

      if (k & 1) {
         cout << sum3 << nl ;
      }
      else {
         cout << sum2 << nl;
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
