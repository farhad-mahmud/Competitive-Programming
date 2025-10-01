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

// DFS

vector<int > cycle ;

bool dfs(int u, int p) {
   vis[u] = true;

   par[u] = p ;

   for (auto v : g[u]) {

      if (v == p) continue ;

      if (!vis[v])
      {
         if (dfs(v, u)) {

            return true ;
         }
      }
      else {

         cycle.push_back(v) ;
         // push cycles first node ...

         int cur = u ;
         // set parent of v , the cur node ..
         //and while u nodes parents becomes ..v itself by cycling
         // till then ..
         // we keep finding the parent of u , then the parent of parent of u
         // untill we find the same node v .

         while (cur != v) {

            cycle.push_back(cur) ;

            cur = par[cur] ;
         }

         cycle.push_back(v) ;

         // close the cycle , by adding v again ..

         return true ;

      }
   }

   return false ;
}


void solve ()
{
   int n , m ; cin >> n >> m ;

   while (m--) {

      int u , v ; cin >> u >> v ;

      g[u].push_back(v) ;
      g[v].push_back(u) ;
   }


   bool f = false ;
   for (int u = 1; u <= n; u++) {

      if (!vis[u]) {

         if (dfs(u, -1)) {

            f = true ;
            break ;

         }
      }
   }

   if (!f) {

      cout << "IMPOSSIBLE" << nl;
   }
   else {

      cout << cycle.size() << nl;

      for (auto i : cycle) {

         cout << i << ' ' ;
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
