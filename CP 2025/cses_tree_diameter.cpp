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

void dfs(int u,int p) {

    dis[u] = 0 ;
    sub[u].clear() ;

    for (auto v : g[u]) {
           
          if(v== p) continue ;

          dfs(v,u) ;  // u is the parent of v node .. 

          sub[u].push_back(v) ; // v is a child of u ..

          dis[u]++ ;  // 

          for(auto i : ){

               dis[u]++ ;
          }
    }
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

            dfs(1,1) ;


            for(int i=1;i<=n;i++){

                 cout << dis[i] << ' ' ;
            }

            cout << nl ;

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
