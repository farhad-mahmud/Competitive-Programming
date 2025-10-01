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

const int N = 2e5 + 9;
const int MOD = 1e9 + 7;

vector<pair<int, int >> g[N];
bool vis[N];
int dis[N], par[N], sub[N] ; // sub = subtree ..

int n ;

void dijkstra(int start) {

   const int INF = 1e14 ;
   for (int i = 1; i <= n; i++) {
      dis[i] = INF ;
      vis[i] = false ;
      par[i] = -1 ;
   }

   dis[start] = 0 ;
   priority_queue<pair<int, int >, vector<pair<int, int>>, greater<pair<int, int>> > pq ;
   pq.push({0, start}) ;// distance , node ;

   while (!pq.empty()) {
      int u = pq.top().second ;
      pq.pop() ;

      if (vis[u]) continue ;

      vis[u] = true ;

      for (auto [v, w] : g[u]) {

         if (dis[u] + w < dis[v]) {
            dis[v] = dis[u] + w ;
            par[v] = u ;
            pq.push({dis[v], v}) ;
         }
      }
   }

}


void solve ()
{
   int m ;  cin >> n >> m ;

   while (m--) {

      int u , v , w ; cin >> u >> v >> w ;

      g[u].push_back({v, w}) ;

   }

   dijkstra(1) ;

   for (int u = 1 ; u <= n; u++) {

      cout << dis[u] << ' ' ;
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
