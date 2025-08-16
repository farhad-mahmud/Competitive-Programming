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

vector<int> g[N];
bool vis[N];
int dis[N], par[N], sub[N] ; // sub = subtree ..
int depth[N] ;
   // DFS 

pair<int ,int > dfs(int u , int p , int dis){

      pair<int ,int > best = {dis,u}; // dist,node

      for(auto v : g[u]){

          if(v== p) continue ;

          best = max(best, dfs(v,u,dis+1)) ;
      }

      return best ;
}


void solve ()
{
            int n ; cin >> n  ;

            int m= n-1 ;

            while(m--){

                  int u , v ; cin >> u >> v ;

                  g[u].push_back(v) ;
                  g[v].push_back(u) ;
            }

           
            auto a = dfs(1,-1,0) ; // first dfs farthest node from 1 ;

            auto b = dfs(a.second,-1,0) ; // 2nd dfs 


            cout << b.first << nl; 
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
