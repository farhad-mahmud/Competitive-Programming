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

vector<pair<int, int >> g[N] ;
bool vis[N];
int dis[N], par[N], sub[N] ; // sub = subtree ..
//DFS
const int INF = 1e18;
// Dijkstra's algorithm
bool f = false ;
void dijkstra(int start, int n) {
   // initialize distance with infinity
   for (int i = 1; i <= n; i++) {
      dis[i] = INF;
      par[i] = -1;
      vis[i] = false;
   }
   dis[start] = 0;
   priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
   pq.push({0, start}); // {distance, node}
   while (!pq.empty()) {
      int u = pq.top().second;
      pq.pop();
      if (vis[u]) continue;
      vis[u] = true;
      for (auto [v, w] : g[u]) {
         if (dis[u] + w < dis[v]) {
            dis[v] = dis[u] + w;
            par[v] = u;
            pq.push({dis[v], v}); // pushing child and its distance ;
         }
      }
   }
}
void solve() {
   int n , m ; cin >> n >> m ;

   while (m--) {
      int u , v , w  ; cin >> u >> v >> w ;
      g[u].push_back({v, w}) ;
      g[v].push_back({u, w}) ;
   }

   dijkstra(1 , n ) ;

   if (dis[n] == INF) {
      cout << -1 << nl;
      return ;
   }
   vector<int> path ;
   int cur = n ;
   while (cur != 1) {
      path.push_back(cur) ;
      cur = par[cur] ;
   }
   path.push_back(1) ;
   reverse(all(path)) ;
   for (auto i : path) {
      cout << i <<  ' ' ;
   }
   cout << nl ;
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
