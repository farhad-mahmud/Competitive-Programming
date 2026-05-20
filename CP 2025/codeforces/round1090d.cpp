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

const int N = 1e6 + 9;
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

void solve ()
{  
            int n; cin >> n; 

            vector<int > v ;
            //output(primes);
            for(int i=1;i<=n;i++){
               
                 // v.push_back(k);
                  cout << 1LL * (primes[i] * primes[i-1]) << ' ' ;
            }

            cout << nl;

           int sz = v.size();

           // int prev = v[0];
           // for(int i=1;i<sz;i++){
           //    // cerr << __gcd(prev, v[i]) << nl;
           //     prev= v[i];
           // }
}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;

   cin >> t ;

   sieve();
   while (t--) {

      solve() ;

   }


   return 0;
}
