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

const int N = 1e5 + 9;
const int MOD = 1e9 + 7;


int binpow(int a, int b) {
    int res = 1;
    while (b > 0) {
        if (b & 1) res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

void solve ()
{  
      int n ; cin >> n;

      vector<pair<int,int >> fact ;

      int divisors = 1 ;
      for(int i=0;i<n;i++){
           int p , e ; cin >> p >> e ;

           fact.push_back({p,e});
           divisors = divisors* (e+1) % MOD ;
      }

      //cout << divisors << nl ;

      int sum = 1 ;
      for(auto [p,e] : fact){
         //cerr << p << ' ' << e << nl; 
            int up = (binpow(p,e+1) - 1 + MOD) % MOD ;
            int down = binpow(p - 1, MOD-2) % MOD ;
             sum = sum * (up * down % MOD ) % MOD ;
      }

      int prd =  1;
      int div_cnt = 1 ; // prev div_cnts..
       
      for(auto [p,e] : fact){
           prd = binpow(prd, e+1);

           // mul by .. p^{ e*(e+1)/2 * div_cnt2}
           int cur = binpow(p,(e*(e+1)/2)% (MOD-1));
           prd = prd * binpow(cur , div_cnt) % MOD ;


           div_cnt = div_cnt * (e+1) % (MOD-1);

      }

      cout << divisors % MOD  << ' '<<sum % MOD  << ' ' << prd % MOD << nl ;
}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;

   // cin >> t ;

   while (t--) {

      solve() ;

   }


   return 0;
}
