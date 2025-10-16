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
   int n ; cin >> n ;

   if (n < 38) {
      no ;
      return ;
   }

   vector<int > primes ;

   for (int i = 1; i < N; i++) {
      if (is_prime[i]) {
         primes.push_back(i) ;
      }
   }

   // output(primes) ;

   bool f = false ;

   for (int i = 0; i < (int)primes.size() - 2; i++) {

      int a = primes[i] ;

      if (a * a >= n) {
         break ;
      }

      int a_sq = n - (a * a) ;

      int l = i + 1, r = primes.size() - 1 ;

      while (l < r) {
         int b = (1LL) * primes[l] * primes[l] ;
         int c = (1LL) * primes[r] * primes[r] ;
         int sum = b + c ;

         if (sum == a_sq) {
            f = true ;
            break ;

         }
         else if (sum < a_sq) {

            l++ ;
         }
         else {
            r-- ;
         }
      }

      if (f) {
         break ;
      }
   }

   if (f) {
      yes ;
   }
   else {
      no  ;
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
