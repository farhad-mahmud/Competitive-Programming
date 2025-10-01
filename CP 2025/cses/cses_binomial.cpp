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

const int N = 1e6 + 9 ;
const int MOD = 1e9 + 7;

vector<int > fact(N + 1) , invfact(N + 1) ;

int binpow(int a, int b) {
   int res = 1;
   while (b > 0) {
      if (b & 1) res = res * a % MOD;
      a = a * a % MOD;
      b >>= 1;
   }
   return res;
}

void pre() {  // prefix and suffix multi..

   fact[0] = 1 ;

   for (int i = 1; i <= N ; i++) {  //prefix..
      fact[i] = fact[i - 1] * i % MOD ;
   }

   invfact[N] = binpow(fact[N], MOD - 2) ;

   for (int i = N ; i >= 1; i--) { // suffix ..
      invfact[i - 1] = invfact[i] *  i % MOD ;
   }

}

int nCr(int n, int r) {
   if (r < 0 || r > n) return 0;
   return fact[n] * invfact[r] % MOD * invfact[n - r] % MOD;
}

void solve ()
{

   int a , b ; cin >> a >> b ;

   cout << nCr(a, b) << nl;

}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;
   cin >> t ;
   pre() ;

   while (t--) {

      solve() ;

   }


   return 0;
}
