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
   vector<pair<int, int >> a(n) ;
   for (int i = 0; i < n; i++) {
      cin >> a[i].first >> a[i].second ;
   }

   vector<vector<int >> v (n, vector<int >(3)) ;
   for (int i = 0; i < n; i++) {
      v[i][0] = a[i].first ;
      v[i][1] = a[i].second ;
      v[i][2] = i ;
   }

   sort(all(v)) ;
   priority_queue<pair<int, int> , vector<pair<int, int >>, greater<pair<int, int >>> occ_rooms ;
   int rm_cnt = 0 ;
   vector<int > ans(n) ;
   for (int i = 0; i < n; i++) {
      int arriv = v[i][0] ;
      int dep = v[i][1] ;
      int idx = v[i][2] ;

      if (occ_rooms.empty() || occ_rooms.top().first >= arriv) {
         rm_cnt++;
         occ_rooms.push({dep, rm_cnt});
         ans[idx] = rm_cnt ;
      }
      else {
         int free_room = occ_rooms.top().second ;
         occ_rooms.pop() ;
         occ_rooms.push({dep, free_room}) ;
         ans[idx] = free_room ;
      }

   }

   cout << rm_cnt << nl;
   for (int i = 0; i < n; i++) {
      cout << ans[i] << ' ' ;
   }

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
