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

vector<pair<int, int >> g[N] ;
bool vis[N];
int dis[N], par[N], sub[N] ; // sub = subtree ..

// DFS


void dfs(int u, int p) {
   vis[u] = true;
   par[u] = p ;
   for (auto v : g[u]) {
      if (!vis[v])
      {
         dfs(v, u);
      }
      else {

      }
   }
}

// Connected Components Counter


void solve ()
{
   int n ; cin >> n ;

   int m = n ;

   while (m--) {
      int u, v, w ; cin >> u >> v >> w ;

      g[u].push_back({v, w}) ;

   }


   dfs(1, -1) ;

   for (int u = 1; u <= n; u++) {

      for (auto [v, w] : g[u]) {

         cout << u << ' ' << v <<  nl;

      }
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
