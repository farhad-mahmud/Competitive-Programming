  #include <bits/stdc++.h>

using namespace std;

#define ll long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
#define vi       vector<int > 
#define  forr    for(auto &i : x) 
const int  MOD = 1e9 + 7;

// in graph nodes and edges will be given ;

const int N = 1e5 + 9 ;

//int g[N][N] ;
// storing graph adjecency list ;

vector<int > g[N] ;

// time complexity big O(V+E) ;

bool vis[N] ;

void dfs(int u){

      vis[u] = true ;

      for(auto v : g[u]){

          if(!vis[v]){

             dfs(v) ; 
          }
      }

}

void solve ()
{
                int n , m ; cin >> n >> m ;  // n node , m edge ;


                    while(m--){  // loop through number of edges ;


                	   int u, v ; cin >> u >> v ;

                	   g[u].push_back(v) ;
                	   g[v].push_back(u) ;

                 

                }
            
            dfs(1) ;

            for(int i=1 ;i<=n;i++){

                 if(!vis[i]){    // if any edges was not visited ; if vis[i] is false ;


                      cout << "Disconnected Graph" << endl; 
                      return ; 
                 }
            }

            cout << "Connected Graph" << endl; 
             
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
