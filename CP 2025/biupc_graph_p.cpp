#include <bits/stdc++.h>
using namespace std;

#define int  long long

#define nl       "\n" 

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
// Constants
const int N = 1e5 + 9;
const int MOD = 1e9 + 7;


vector<int> g[N];
bool vis[N];
int dis[N], par[N];

int nodes , edges ;

void dfs(int u) {

    vis[u] = true;
    nodes++;

    edges += g[u].size() ;

    for (auto v : g[u]) {

        if (!vis[v])
        {
            dfs(v);
        } 
    }
}

void solve ()
{
        
                int n , m ; cin >> n >> m ;

                while(m--){

                     int u , v  ;  cin >> u >> v ;
                       
                     g[u].push_back(v) ;
                     g[v].push_back(u) ;

                }
                  
                   int ans = 0 ;

                for(int i=1;i<=n;i++){

                     if(!vis[i]){

                          nodes = edges = 0 ;
                        
                          dfs(i) ;

                          if(edges / 2 != nodes *(nodes -1) /2) 
                          {

                                no ;

                                return ;
                          }
                     }
                }
               

            
            yes ;

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
