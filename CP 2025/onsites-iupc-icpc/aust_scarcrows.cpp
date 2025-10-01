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

vector<int> g[N];
bool vis[N];
int dis[N], par[N], sub[N] ; // sub = subtree ..

bool vis1[N] ;
bool vis2[N] ;
int cnt = 0 ;

int a, b , c ;

int ab , bc , ac ;
void dfs(int u, int dis) {
   vis[u] = true;

   if (u == b) {

      ab = dis ;
      return ;
   }
   for (auto v : g[u]) {
      if (!vis[v])
      {
         dfs(v , dis + 1);
      }
   }

}

void dfs1(int u, int dis) {
   vis[u] = true;

   if (u == c) {

      bc = dis ;
      return ;
   }

   // cerr << u << nl;
   for (auto v : g[u]) {
      if (!vis[v])
      {
         dfs1(v , dis + 1);
      }
   }

}

void dfs2(int u, int dis) {
   vis[u] = true;

   if (u == a) {

      ac = dis ;
      return ;
   }
   for (auto v : g[u]) {
      if (!vis[v])
      {
         dfs2(v , dis + 1);
      }
   }

}

void reset_vis(int n) {
   for (int i = 1; i <= n; i++) vis[i] = false;
}

void solve ()
{
   int n , d  ; cin >> n >> d ;

   cin >> a >> b >> c ;


   int m = n - 1 ;

   while (m--) {

      int u , v ; cin >> u >> v ;

      g[u].push_back(v) ;
      g[v].push_back(u) ;
   }


   dfs(a , 0) ;
   reset_vis(n) ;

   dfs1(b , 0) ;
   reset_vis(n) ;
   dfs2(c , 0) ;
   reset_vis(n) ;

   int x = (2 * d) ;


   if (ab <= x && bc <= x && ac <= x) {

      cout << 1 << nl;
   }
   else if (ab <= x || bc <= x || ac <= x) {

      cout << 2 << nl;
   }
   else {

      cout << 3 << nl;
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
