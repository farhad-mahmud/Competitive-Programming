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
const int N = 1e5 + 9;
const int MOD = 1e9 + 7;

vector<int> g[N];
bool vis[N];
int dis[N], par[N], sub[N] ; // sub = subtree ..

   // DFS 

void dfs(int u) {
    vis[u] = true;
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

                     int u , v ; cin >> u >> v ;

                     g[u].push_back(v);
                     g[v].push_back(u);
               }

               vector<int > nodes ;


             for(int u=1;u <=n;u++){

                  if(!vis[u]){

                       nodes.push_back(u) ;
                       dfs(u) ;
                  }
             }

            cout << nodes.size() - 1 << nl; //roades = n-1 ;

            for(int i=1;i<nodes.size() ;i++){

                 cout << nodes[i-1] << ' ' << nodes[i] << nl; 
            }

 } 

int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

        //int >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
