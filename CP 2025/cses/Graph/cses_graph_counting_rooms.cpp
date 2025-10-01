#include <bits/stdc++.h>
using namespace std;

#define int  long long

#define nl       "\n" 

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define pii pair<int,int>
#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
#define dbug(x) cerr << (#x) << " is " << (x) << nl;
#define output(a) for(auto &it: a) cerr<<it<<" "; cerr<<nl;
// Constants
const int N = 1000;
const int MOD = 1e9 + 7;


vector<int> g[N];
bool vis[1010][1010] ;

int dis[N], par[N], sub[N] ; // sub = subtree ..

   // DFS 

int neigh_x[4] = {0,0,1,-1};
int neigh_y[4] = {1,-1,0,0} ;

char grid[1010][1010] ;

int n , m ;

bool valid (int nx  , int ny){

       if(ny <0) return false ;
       if(nx<0)  return false ;
       if(nx >=n) return false ;
       if(ny >=m) return false ;


       return true ;
}
void dfs(int x,int y) {

      grid[x][y] = '#' ;

      for(int i=0;i<4 ;i++){

           int new_x = x + neigh_x[i] ;

           int new_y = y + neigh_y[i] ;

           if(valid(new_x, new_y) && grid[new_x][new_y] == '.'){

                 dfs(new_x, new_y) ;
           }      

      }
}


void solve ()
{
                 
                   cin >> n >> m ;

                  for(int i=0;i<n;i++){

                     for(int j=0;j<m;j++){ 

                         cin >> grid[i][j] ;
                     }
                  }


                  int cnt = 0 ;

                  for(int i=0;i<n;i++){

                     for(int j=0;j<m;j++){

                          if(grid[i][j] == '.'){

                              dfs(i,j) ;

                              cnt++ ;
                          }
                     }
                  }


                  cout << cnt << nl;
}  

int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

         //cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
