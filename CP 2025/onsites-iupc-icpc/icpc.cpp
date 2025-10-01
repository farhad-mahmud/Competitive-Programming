#include <bits/stdc++.h>
using namespace std;

#define int  long long

#define nl       "\n" 

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define pii pair<int,int>
#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
#define dbug(x) cerr << (#x) << " is " << (x) << nl;
#define output(a) for(auto &it: a) cerr<<it<<" "; cerr<<nl;
// Constants
const int N = 2e5 + 9;
const int MOD = 1e9 + 7;


vector<int> g[N];
bool vis[N];
int dis[N], par[N], sub[N] ; // sub = subtree ..

   // DFS 
int nodes ;

int dfs(int u) {

    int cnt = 0 ;

    vis[u] = true;

    nodes++ ;

    for (auto v : g[u]) {

        if (!vis[v])
        {
            cnt++ ;
            dfs(v);
        } 

    }

    return cnt ;
}


void solve ()
{
                  int n , m ; cin >> n >> m ;

                  while(m--){


                         int u , v ; cin >> u >> v ;

                         g[u].push_back(v) ;
                         g[v].push_back(u) ;

                  }


                  int ans = 0 ;

                  for(int i=1;i<=n;i++){

                       if(!vis[i]){

                             nodes = 0 ;

                             dfs(i) ;

                             ans = max(nodes , ans) ;

                       }
                  }


                  cout << ans << nl ;
}

int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

         //cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
