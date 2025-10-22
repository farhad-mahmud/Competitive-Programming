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
const int N = 2e5 + 9;
const int MOD = 1e9 + 7;

// for prime expo info / factorize many number quickly
int spf[N] ;
void sieve() {
   for (int i = 2; i < N; i++) {
      spf[i] = i;
   }
   for (int i = 2; i < N; i++) {
      if (spf[i] == i) {
         for (int j = i; j < N; j += i) {
            spf[j] = min(spf[j], i);
         }
      }
   }
}
void solve ()
{

   int n ; cin >> n ;
   vector<int > a(n), b(n); for (int i = 0; i < n; i++) cin >> a[i] ;
   for (int i = 0; i < n; i++) cin >> b[i] ;

   map<int, int > mp  ;

   int val = 0 ;
   // prime factorized array elements ..
   for (int i = 0; i < n; i++) {
      val = a[i] ;

      while (val > 1) {
         int p = spf[val] ;
         mp[p]++ ;   // mp = cnt ,prime
         val /= p ;
      }
   }

   bool f = false ;
   for (int i = 0; i < n; i++) {
      val = a[i] ;
      while (val > 1) { // ekta specific element er prime fact gula ber kore disi ..
         int p = spf[val] ;
         mp[p]-- ;
         val /= spf[p] ;
      }

      val = a[i] ;
      while (val > 1) {
         if (mp[spf[val]] > 0) { // oi specific element er prime fact ,
            // pura map anno element er ektao thakle,
            f = true ;          // ekta common prime ache tahole..
            break ;
         }
         val /= spf[val] ;
      }

      if (f) break ;
      val = a[i] ;

      while (val > 1) {
         mp[spf[val]]++ ;  // je element er prime fact remove krsi ota
         // abar add kortesi  ;
         val /= spf[val] ;
      }
   }

   if (f) {
      cout << 0 << nl ;
   }
   else {
      f = false ;

      for (int i = 0; i < n; i++) {
         val = a[i] ;
         while (val > 1) {
            mp[spf[val]]-- ;
            val /= spf[val] ;
         }

         val = a[i] + 1 ;  // +1 kore then prime fact khujtesi..

         while (val > 1) {
            if (mp[spf[val]] > 0) {
               f = true ;
               break ;
            }
            val /= spf[val] ;
         }

         if (f) break ;
         val = a[i] ;
         while (val > 1) {  // je element er prime fact remove krsi ota
            // back kortesi ..
            mp[spf[val]]++ ;
            val /= spf[val] ;
         }
      }

      if (f) {
         cout << 1 << nl ;
      }
      else {
         cout << 2 << nl ;
      }
   }


}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;

   cin >> t ;
   sieve() ;
   while (t--) {

      solve() ;

   }


   return 0;
}
