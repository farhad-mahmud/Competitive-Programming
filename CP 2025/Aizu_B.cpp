#include <bits/stdc++.h>
using namespace std;

#define int  long long
  
#define nl       "\n" 

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()

const int MOD = 1e9 + 7;
const int N = 105 ;

vector<int> g[N];
bool vis[N];
int dis[N], par[N];

int discovery_time[N] , finish_time[N] ;

int current_time = 0 ; 
   // DFS 

void dfs(int u) {
    vis[u] = true;
   
    current_time++ ;
    discovery_time[u] = current_time ; 
   

    for (auto v : g[u]) { 
        if (!vis[v])  
        {
            dfs(v);
        } 
    }

    current_time++;

    finish_time[u] = current_time ; 

}
 


void solve ()
{
                               
                int n ;cin >> n ;   // n nodes 


             for(int i = 1 ;i <= n ;i++){

                 int u ,  adjacent_node_count ; cin >> u >> adjacent_node_count ;

                 // u is uth node ;
                 // adjacent_node_count is , how many nodes are connected
                 // to uth node ;


                 while(adjacent_node_count--){

                      int v ; cin >> v ;

                      g[u].push_back(v)  ;

                  }

                  sort(g[u].begin(),g[u].end()) ;
             }

            

             current_time = 0 ;
             
             for(int i=1 ;i<=n;i++){

                   if(!vis[i]){

                         dfs(i) ;
                   }
             }


             for(int i=1;i<=n;i++){

                   cout << i << ' ' << discovery_time[i] << ' ' << finish_time[i] << nl;
             }

             
}

// this is directed graph ;

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
