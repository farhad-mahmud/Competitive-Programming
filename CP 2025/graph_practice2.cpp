#include <bits/stdc++.h>
using namespace std;

#define ll  long long

#define nl       "\n" 

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
#define dbug(x) cerr << (#x) << " is " << (x) << nl;
#define output(a) for(auto &it: a) cerr<<it<<" "; cerr<<nl;
// Constants
const int N = 2e5 + 9;
const int MOD = 1e9 + 7;


vector<pair<int,int >> g[N];

bool vis[N];
int dis[N], par[N], sub[N] ; // sub = subtree ..

int cnt = 0 ;
   // DFS 
int k ;
bool found = false ;

void dfs(int u, int p ,int dist) {

      if(found) return ;

      if(u == k){

          cout << dist << nl;
          found = true ;
          return ;

      } 
     
     for(auto i : g[u]){  

          int v = i.first ;
          int w = i.second ;

         if(v == p) continue ;

         dfs(v,u, dist+w ) ;
     }
     

}

void solve ()
{
                int n , m  ;  cin >> n >> m >> k ;

                while(m--){

                     int u , v , w ; cin >> u >> v >> w ;

                     g[u].push_back({v,w}) ;
                     g[v].push_back({u,w}) ;

                }


                dfs(1,1,0)  ;


}

int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

        // cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
