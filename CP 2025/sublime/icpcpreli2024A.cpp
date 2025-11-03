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

   int r = 3 * n ;

   int l = 2 ;

   int h = (r - l + 1 ) ;

   vector<int > pref_sum(h);
   vector<int > pref_prd(h) ;
   vector<int > a(h) ;

   for (int i = 0 ; i < h; i++) {
      a[i] = l ;
      l++ ;
   }

   output(a) ;
   pref_sum[0] = a[0] ;
   int pl = a[0] ;
   for (int i = 1; i < h ; i++) {
      pl++ ;
      pref_sum[i] = pref_sum[i - 1] + pl ;

   }

   pref_prd[0] = a[0] ;
   int prl = a[0] ;
   for (int i = 1; i < h; i++) {
      prl++ ;
      pref_prd[i] = pref_prd[i - 1] * prl ;

   }
   output(pref_sum);
   output(pref_prd) ;

   map<int, int > mp  ;

   vector<int > ans ;

   for (int i = 0; i < h ; i++) {
      int p = pref_prd[i] & pref_sum[i] ;
      if (i > 0 && mp[p] > 1) {
         p = pref_prd[i - 1] & pref_sum[i - 1];
         ans.push_back(a[i - 1]);
      } else {
         ans.push_back(a[i]);
      }
      mp[p]++ ;

      if ((int)mp.size() >= n) {
         break ;
      }

   }

   for (auto [i, j] : mp) {

      cout << i << ' ' << j << nl ;
   }

   cout << nl ;


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
