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

   vector<int > factors ;

   int k = n ;

   while (n > 1) {

      factors.push_back(spf[n]);

      n /= spf[n] ;
   }



   for (auto i : factors) {

      cout << i << ' ' ;
   }

   cout << nl ;

   int s = factors.size() ;

   vector<int > pref(s) ;

   pref[0] = factors[0] ;

   set<int > st ;

   st.insert(pref[0]) ;

   for (int i = 1; i < s; i++) {

      pref[i] = (pref[i - 1] * factors[i]) ;

      st.insert(pref[i]) ;
   }

   output(pref) ;

   vector<int > suf(s) ;

   suf[s - 1] = factors[s - 1] ;

   st.insert(suf[s - 1]) ;

   for (int i = s - 2 ; i >= 0; i--) {

      suf[i] = (suf[i + 1 ] * factors[i]) ;

      st.insert(suf[i]) ;
   }

   output(suf);
   output(st) ;

   vector<int > v(st.begin() , st.end()) ;
   int cnt = 0 ;

   int sz = v.size() ;

   output(v) ;

   for (int i = 0; i < sz; i++) {

      for (int j = i + 1; j < sz ; j++) {

         int p = 0 ;

         p = (v[i] * v[j]) ;
         cerr << p << nl;

         if (p == k) {

            cnt++ ;
         }
      }
   }

   cout << cnt + 1 << nl;
}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;
   sieve() ;

   cin >> t ;

   while (t--) {

      solve() ;

   }


   return 0;
}
