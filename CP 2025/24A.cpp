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

int cost ;

void dfs(int u , int p = 0) {
   vis[u] = true;

   for (auto [v, w] : g[u]) {

      if (!vis[v])
      {
         cost += w ;
         dfs(v, u);
      }
      else if (v == 1 && p != 1) {
         cost += w ;
      }
   }
}

// Connected Components Counter


void solve ()
{
   int n ; cin >> n ;

   int m = n ;
   int sum = 0 ;
   while (m--) {
      int u, v, w ; cin >> u >> v >> w ;

      g[u].push_back({v, 0}) ;
      g[v].push_back({u, w}) ;

      sum += w ;
   }

   dfs(1) ;

   int cost2 = sum - cost ;

   cerr << cost << nl;
   cerr << sum << nl;

   cout << min(cost , cost2) << nl;

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
