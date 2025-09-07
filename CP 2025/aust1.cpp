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

vector<int > spf(100001) ;

void sieve() {

   for (int i = 1; i < 100001; i++) spf[i] = i ;
   for (int i = 2; i * i < 100001 ; i++) {

      if (spf[i] == i) {

         for (int j = i * i ; j < 10001; j += i) {

            if (spf[j] == j) spf[j] = i ;
         }
      }
   }
}

vector<int> primefact(int n) {

   vector<int> factors ;

   while (n != 1) {
      factors.push_back(spf[n]);
      n /= spf[n] ;
   }

   return factors ;
}
void solve ()
{

   int n = 32 ;

   vector<int> factors = primefact(n) ;

   for (auto i : factors) {

      cout << i << ' ' ;
   }


}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;
   sieve() ;
   // cin >> t ;

   while (t--) {

      solve() ;

   }


   return 0;
}
