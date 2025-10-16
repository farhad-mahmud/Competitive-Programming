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

const int N = 1e7 + 9;
const int MOD = 1e9 + 7;

bitset<N> is_prime;
void sieve() {
   is_prime[1] = false;
   for (int i = 2; i < N; i++) {
      is_prime[i] = true;
   }
   for (int i = 2; i * i < N; i++) {
      if (is_prime[i]) {
         for (int j = i * i; j < N; j += i) {
            is_prime[j] = false;
         }
      }
   }
}
void solve ()
{
   int x, y ; cin >> x >> y ;


   int cnt = 0 ;

   while (x != y) { // if x==y , it will break ..

      if (is_prime[x + 2] && x + 1 != y) {
         x = x + 2 ;
      }
      else {
         x = x + 1;
      }

      //cerr << x << nl;
      cnt++ ;
   }

   cout << cnt << nl;

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
