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


void solve ()
{
   int n ; cin >> n ;

   string s ; cin >> s ;

   int cnt1 = count(all(s), '0') ;

   int cnt2 = count(all(s) , '1') ;

   if (!cnt1 || !cnt2) {

      cout << n << nl ;

      for (int i = 1; i <= n; i++) {
         cout << i << ' ' ;
      }
      cout << nl ;
      return ;
   }

   vector<int > ans ;

   for (int i = 0; i < n; i++) {
      if (s[i] == '0') {

         ans.push_back(i + 1)  ;
      }
   }


   cout << ans.size() << nl;

   int k = ans.size() ;

   for (int i = 0; i < k ; i++) {

      cout << ans[i] << ' ' ;
   }

   cout << nl;
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
