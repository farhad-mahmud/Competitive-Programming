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


void solve ()
{
   int n ; cin >> n ;
   string s ; cin >> s ;

   int cnt0 = count(all(s) , '0') ;
   int cnt1 = count(all(s) , '1') ;
   //cerr << cnt0 << nl;

   if (cnt0 == n) {
      yes ;
      return ;
   }

   int c1 = 0 ;
   int mx_c1 = 0 ;
   for (int i = 0; i < n; i++) {

      if (s[i] == '1') {

         c1++ ;
         mx_c1 = max(mx_c1 , c1) ;
      }
      else {
         c1 = 0 ;

      }
   }

   if ((mx_c1 == 2  && cnt1 == mx_c1) || (mx_c1 == 3 && cnt1 == mx_c1)) {

      no ;
   }
   else {
      yes ;
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
