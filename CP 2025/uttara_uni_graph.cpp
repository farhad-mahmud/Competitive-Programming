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
// Constants
const int N = 1e5 + 9;
const int MOD = 1e9 + 7;


//vector<int> g[N]; // unweighted graph 
bool vis[N];
int dis[N], par[N];
vector<pair<int, int>> g[N]; // for weighted graph

   // DFS 


int a[N] ;

void solve ()
{
               int n , m  ; cin >> n >> m ;

               
               for(int i=1;i<=n;i++){

                     g[i].clear() ;
                     a[i] = 1e9 ;
                }

               vector<tuple<int,int ,int >> edges ; // tuple cause of weight ;

               while(m--){

                    int u , v , w ; cin >> u >> v >> w ;

                    g[u].push_back({v,w}) ;
                    g[v].push_back({u,w}) ;

                    edges.push_back({u,v,w}) ;

               }


              for(int u =1;u<=n;u++){

                 for(auto [v,w] : g[u]){  // the weight from u to v ;

                       a[u] = min(a[u] ,w ) ;
                 }
              }
              

             for(auto [u, v, w] : edges){

                  if(max(a[u],a[v]) != w){

                        cout << -1 << nl;
                        return ;
                  }
             }

            
           for(int i=1;i<=n;i++){

                cout << a[i] << ' ' ;
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
