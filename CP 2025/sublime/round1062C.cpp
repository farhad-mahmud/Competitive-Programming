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
   vector<int > a(n) ; for (int i = 0; i < n; i++)cin >> a[i] ;

   vector<int > b , c ;

   //int cnt1 = 0 ;
   for (int i = 0; i < n; i++) {

      if (a[i] % 2 == 0 ) {

         b.push_back(a[i]) ;
      }
      else {
         c.push_back(a[i]) ;
      }

   }



   if (b.size() == 0 && c.size() > 1) {
      int k = c.size() ;

      for (int i = 0; i < k; i++) {
         cout << c[i] << ' ' ;
      }

      cout << nl ;
      return ;
   }
   else if (c.size() == 0 && b.size() > 1) {

      int k = b.size() ;

      for (int i = 0; i < k; i++) {
         cout << b[i] << ' ' ;
      }

      cout << nl ;
      return ;
   }

   sort(all(b)) ;
   sort(all(c)) ;
   //output(b);
   // output(c);

   vector<int> ans;
   int i = 0, j = 0;

   while (i < (int)b.size() && j < (int)c.size()) {
      if (b[i] < c[j]) {
         ans.push_back(b[i]);
         i++;
      } else {
         ans.push_back(c[j]);
         j++;
      }
   }

   while (i < (int)b.size()) ans.push_back(b[i++]);
   while (j < (int)c.size()) ans.push_back(c[j++]);


   for (auto i : ans) {
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
