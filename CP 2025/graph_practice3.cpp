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

vector<int > g[N] ;

bool vis[N];
int dis[N], par[N], sub[N] ; // sub = subtree ..

int cnt = 0 ;
   // DFS 
int k ;
bool found = false ;

void dfs(int u) {

      if(found) return ;

      vis[u] = true ;

      cnt++ ;

      if(u == k){

          cout << cnt << nl;
          found = true ;
          return ;

      } 
     
      for(auto v : g[u]){

            if(!vis[v]){
                dfs(v) ;
            }
      }
}

void solve ()
{
                int n , m  ;  cin >> n >> m >> k ;

                while(m--){

                      int u , v ; cin >> u >> v ;

                      g[u].push_back(v) ;

                      g[v].push_back(u) ;
                }


                dfs(1)  ;


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
