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

//int n ; cin >> n ;
//vector<int > a(n) ; for (int i = 0; i < n; i++) cin >> a[i] ;


void solve() {
   int n;
   cin >> n;
   string s;
   cin >> s;

   int f1 = -1;
   for (int i = 0; i < n; i++) {
      if (s[i] == '1') {
         f1 = i;
         break;
      }
   }

   if (f1 == -1) {
      yes ;
      return;
   }

   int l1 = -1;
   for (int i = n - 1; i >= 0; i--) {
      if (s[i] == '1') {
         l1 = i;
         break;
      }
   }

   if (f1 == l1) {
      yes ;
      return;
   }

   bool f = false;
   for (int i = f1 + 1; i < l1; i++) {
      if (s[i] == '0') {
         f = true;
         break;
      }
   }

   if (f) {
      yes;
   } else {
      no ;
   }
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
