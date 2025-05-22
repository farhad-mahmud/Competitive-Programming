  #include <bits/stdc++.h>

using namespace std;

#define int  long long

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

const int N = 105 ;

int g[N][N] ;
// storing graph adjecency list ;

vector<int > g[N] ;

void solve ()
{
                int n , m ; cin >> n >> m ;  // n node , m edge ;


                while(m--){

                	   int u, v ; cin >> u >> v ;

                	   g[u].push_back(v) ;
                	   g[v].push_back(u) ;

                	  // g[u][v] = 1 ;      // cause undirected graph [u][v] = [v][u] ;
                	  // g[v][u] = 1 ;

                }

 
             // if(g[4][2]){      // checing the edges between vertexes ;

              //	     yes ;
           //   }
            //  else {
            //  	    no ;
            //  }
            
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
