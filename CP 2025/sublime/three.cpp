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

vector<vector<int>>subsets;
void generateSubsets(vector<int>& arr, vector<vector<int>>& subsets) {
   int n = arr.size();
   for (int i = 0; i < (1 << n); ++i) {
      vector<int> subset ;
      for (int j = 0; j < n; ++j) {
         if (i & (1 << j)) {
            subset.push_back(arr[j]);
         }
      }
      cerr << subset.size() << nl ;
      if (subset.size() == 3) {
         subsets.push_back(subset);
      }
   }
}

void solve ()
{

   int n ; cin >> n ;
   vector<int > a(n) ; for (int i = 0; i < n; i++)cin >> a[i] ;

   generateSubsets(a, subsets) ;

   for (int i = 0; i < 4 ; i++) {

      for (auto j : subsets[i]) {
         cout << j  << ' ' ;
      }


      cout << nl ;
   }

}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;

   //cin >> t ;

   while (t--) {

      solve() ;

   }


   return 0;
}
