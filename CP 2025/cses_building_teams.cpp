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


vector<int> g[N];
bool vis[N];
int dis[N], par[N], sub[N] ; // sub = subtree ..

   // DFS 
int color[N] ;

bool f = true ;

void dfs(int u , int c) {
    vis[u] = true;

    color[u] = c ; 

    for (auto v : g[u]) {
          
          if(color[v] == 0){

               dfs(v,3 - c) ;
          }
          else if(color[v] == c){

                f = false ;
                return ;
          }
    }
}


void solve ()
{
                 
                int n , m ; cin >> n >> m ;

                while(m--){

                      int u, v ; cin >> u >> v ;

                      g[u].push_back(v) ;
                      g[v].push_back(u) ;

                }


               for(int i=1;i<=n;i++){

                    if(color[i] == 0){

                          dfs(i,1);
                    }
               }


              if(!f){

                    cout << "IMPOSSIBLE" << nl; 
              }
              else {


                    for(int i=1;i<=n;i++){

                         cout << color[i] << ' ' ;
                    }
              }
          
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
