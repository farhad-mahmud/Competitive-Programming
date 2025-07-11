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
bool ok ;
   // DFS 
vector<pair<int,int>> ans ; // (from, to) ;

void dfs(int u,bool ok) {
    vis[u] = true;
    for (auto v : g[u]) {
        if (!vis[v])
        {
            if(ok){
                ans.push_back({v,u});  // edge to parent

            }
            else {
                  ans.push_back({u,v});  // parent to edge ;
            }
            dfs(v,!ok);
        } 
    }
}
void solve ()
{
                      int n ; cin >> n ;


                      while(n--){

                           int u , v ;
                           cin >> u >> v ;
                           g[u].push_back(v) ;
                           g[v].push_back(u) ;

                      }

                      int cnt_deg = 0 ;

                      for(int i;i<=n;i++){
                           if(g[i].size()>2){
                                  cnt_deg++ ;
                           }
                      }

                      if(cnt_deg > 1){
                          no ;

                          return ;
                      }

                      int r = 1 ;
                      while(r <=n && g[r].size()!= 2){
                            r++ ;
                      }

                      if(r> n){
                           no ;
                           return ;
                      }

                      ans.emplace_back(r,g[r][0]);
                      ans.emplace_back(g[r][1],r) ;
                      vis[r] = true ;

                      dfs(g[r][0],true);
                      dfs(g[r][1],false) ;

                     for(auto i : ans){
                          cout << i.first << ' ' << i.second << nl; 
                     }
              
}

int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

         cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
