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

const int N = 105 ;

int g[N][N] ;
// storing graph adjecency list ;

//vector<int > g[N] ;

void solve ()
{
                
                int n ;cin >> n ;

                for(int i=1 ;i<=n;i++){

                       int u , k ; cin >> u >> k ; // k is degrees ;

                       while(k--){   // taking k degrees input ;

                           int v ; cin >> v ; // v'is are the ids of vertices adjacent to u 

                           g[u][v] = 1 ; // a edge between u and v ;  
                           
                       }
                }
             

         for(int i=1 ;i<=n;i++){

              for(int j=1 ;j<=n ;j++){

                   if(j != 1) cout << ' ' ;

                   cout << g[i][j]  ;
              }

              cout << endl ;
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
