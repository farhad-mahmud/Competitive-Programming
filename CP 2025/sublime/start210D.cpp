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

int a[N] ;


void solve ()
{
   int n ; cin >> n ;
   vector<pair<int, int>> a(n);
   for (int i = 0; i < n; i++) {
      cin >> a[i].first;
      a[i].second = i;
   }

   sort(all(a)) ;

   vector<int> p(n) ;

   for (int i = 0; i < n; i++) {
      if (i == 0 || i == n - 1) {
         p[a[i].second] = -1 ;
      }
      else {
         int l = (a[i - 1].first + a[i].first) / 2 ;
         int r = (a[i + 1].first + a[i].first) / 2 ;

         int ans =  max(0LL , (r - l))  ;

         p[a[i].second] = ans ;
      }
   }

   for (auto i : p) {

      cout << i << ' ' ;
   }

   cout << nl ;

}


int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;

   cin >> t ;

   while (t--) {

      solve() ;

   }


   return 0;
}
