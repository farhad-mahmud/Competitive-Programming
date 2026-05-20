//---  Bismillahir Rahmanir Rahim ---//


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

const int N = 31623 + 5 ;
const int MOD = 1e9 + 7;

vector<int> primes;

void sieve() {
    vector<bool> isPrime(N, true);

    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i < N; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j < N; j += i) {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 2; i < N; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }
}

vector<int> getFactorization(int n) {

    vector<int> f;

    for (auto &p : primes) {

        if (p * p > n) break;

        if (n % p == 0) {
            f.push_back(p);

            while (n % p == 0) {
                n /= p;
            }
        }
    }

    if (n > 1) {
        f.push_back(n);  
    }

    return f;
}


void solve ()
{  
      int n ; cin >> n ;

      vector<int > fact = getFactorization(n) ;

      int ans = 1 ;
      for(auto p : fact ){

            ans *=p ;
      }

      cout << ans << nl ;
 
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
