#include <bits/stdc++.h>
using namespace std;

#define ll  long long

#define nl       "\n" 

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
#define dbug(x) cerr << (#x) << " is " << (x) << nl;
#define output(a) for(auto &it: a) cerr<<it<<" "; cerr<<nl;

const int MAX = 1e6 + 5;
int mu[MAX], cnt[MAX], freq[MAX];

// Precompute Möbius function using linear sieve
void mobius() {
    for (int i = 1; i < MAX; i++) mu[i] = 1;
    vector<int> primes;
    vector<bool> is_prime(MAX, true);

    for (int i = 2; i < MAX; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            mu[i] = -1;
        }
        for (int p : primes) {
            if (i * p >= MAX) break;
            is_prime[i * p] = false;
            if (i % p == 0) {
                mu[i * p] = 0;
                break;
            } else {
                mu[i * p] = -mu[i];
            }
        }
    }
}

ll countCoprimePairs(const vector<int>& a) {
    mobius();

    // Step 1: Count frequencies
    for (int val : a) cnt[val]++;

    // Step 2: Count how many numbers are divisible by d
    for (int d = 1; d < MAX; d++) {
        for (int mult = d; mult < MAX; mult += d) {
            freq[d] += cnt[mult];
        }
    }

    // Step 3: Use Möbius inversion to count coprime pairs
    ll ans = 0;
    for (int d = 1; d < MAX; d++) {
        if (freq[d] >= 2) {
            ll pairs = 1LL * freq[d] * (freq[d] - 1) / 2;
            ans += mu[d] * pairs;
        }
    }

    return ans;
}

void solve(){

               int n ; cin >> n ;

               vector<int > a(n) ;

               for(int i=0;i<n;i++) cin >> a[i] ;


              int ans = countCoprimePairs(a) ;

             cout << ans << nl;

}


int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

         //cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
