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

// shortest distance from source ;
// everyones distance from source can be found by bfs ;;

void solve ()
{
                        int n, m ; cin >> n >> m ;

                        while(m--){

                               int u, v ; cin >> u >> v ;

                               g[u].push_back(v) ;
                               g[v].push_back(u) ;
                        }

                        queue<int > q ;

                        q.push(1) ; vis[1] = true ; dis[1] = 0 ;

   
                        while(!q.empty()){  

                             int u =   q.front() ;
                             q.pop() ; 
                             for(auto v : g[u]){

                                  if(!vis[v]){

                                     q.push(v) ;
                                     par[v] = u ;
                                     dis[v] = dis[u] + 1 ;
                                     // v is the new layer ;
                                     // u is the prev layer 
                                     // dis[u] + 1 , is the distance from prev to new
                                     // layer ;

                                     vis[v] = true ;
                                  }
                             }
                        }

                       //printing distance ;
                        for(int i=1 ;i<=n;i++){

                            cout << dis[i] << ' ' ;
                        } 


                        cout << '\n' ;
                 
                 int v = 4 ;  // shortest past from 1 to 4 ;

                 while(v != 1){

                     cout << v << ' ' ;
  
                      v= par[v] ;
                 }

                 cout << 1 << '\n' ;   


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
