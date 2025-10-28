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

const int MOD = 1e9 + 7;


const int N = 1e6 + 9;
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

   vector<int> primes;
   for (int i = 2; i < N && (int)primes.size() < 20; i++) {
      if (is_prime[i]) primes.push_back(i);
   }


   int n ; cin >> n ;

   vector<int > a(n) ; for (int i = 0; i < n; i++)cin >> a[i] ;

   sort(a.begin(), a.end()) ;

   //output(primes) ;

   int g = 0 ;
   for (int i = 0; i < n; i++) {
      g = __gcd(g , a[i]) ;
   }

   int k = g ;

   int sz = primes.size() ;
   for (int i = 0; i < sz; i++) {

      if (k % primes[i] != 0) {

         cout << primes[i] << nl ;
         return ;
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
