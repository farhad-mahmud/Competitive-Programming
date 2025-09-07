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

const int N = 1e6 + 9;
const int MOD = 1e9 + 7;


vector<int > prime ;
bool vis[N] ;

void sieve() {

   for (int i = 2; i * i < N; i++) {

      if (vis[i]) {

         continue ;
      }

      for (int j = i * i ; j < N; j += i) {

         vis[j] = true ;
      }


   }

   for (int i = 2; i < N; i++) {

      if (!vis[i]) prime.push_back(i) ;
   }


}


vector<int >  primefact(int n) {

   vector<int> factors ;

   while (n != 1) {
      factors.push_back(prime[n]);
      n /= prime[n] ;
   }

   return factors ;
}


int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;

   sieve() ;
   // cin >> t ;

   while (t--) {


      int n ; cin >> n ;

      vector<int > fact = primefact(n) ;


      for (auto i : fact) {

         cout << i << ' ' ;
      }

      //output(prime) ;

   }


   return 0;
}
