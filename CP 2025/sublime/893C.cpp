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

vector<int> g[N];
bool vis[N];
int dis[N], par[N], sub[N] ; // sub = subtree ..
//DFS
set<int> st ;
int cst ;

void dfs(int u) {
   vis[u] = true;
   st.insert(u) ;
   cst = min(cst , a[u - 1]) ;

   for (auto v : g[u]) {
      if (!vis[v])
      {
         dfs(v);
      }
   }

}

void solve() {

   int n , m ; cin >> n >> m ;

   for (int i = 0; i < n; i++) cin >> a[i] ;
   int sum = 0 ;
   if (m == 0) {

      for (int i = 0; i < n; i++) {
         sum += a[i] ;
      }
      cout << sum << nl;
      return ;
   }
   while (m--) {
      int u, v; cin >> u >> v;
      g[u].push_back(v) ;
      g[v].push_back(u) ;
   }

   for (int u = 1 ; u <= n; u++) {
      if (!vis[u]) {
         cst = 1e18 ;
         dfs(u) ;
         sum += cst ;
         // dbug(u); dbug(sum);
      }
   }

   cout << sum << nl;
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
