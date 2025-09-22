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


int pow(int n , int p) {
   int cnt = 0 ;
   while (n % p == 0) {
      n /= p ;
      cnt++;
   }
   return cnt ;
}
void solve ()
{
   int n ; cin >> n ;

   vector<int > a(n) ;

   int sum = 0 ;

   for (int i = 0; i < n; i++) {
      cin >> a[i] ;
      sum += a[i] ;
   }

   //dbug(sum) ;
   sort(all(a)) ;

   map<int, int > exp ;
   int ans = 0 ;

   for (int i = 0; i < n; i++) {

      int p = a[i] ;
      if (p > 1) {
         ans = pow(sum , p) ;

         exp[p] += ans ;
      }
   }

   int prime = 0 ;
   int cnt = 0 ;

   for (auto [p, e] : exp) {

      cerr << p << ' ' << e << nl;

      if (e > cnt) {
         prime = p ;
         cnt = e ;
      }
   }


   cout << prime << nl;
   cout << cnt << nl;
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
