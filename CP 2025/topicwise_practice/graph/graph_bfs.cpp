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
bool vis[N] ;
int dis[N] ;

int k ;

void bfs(int start){
     
      queue<int > q ;
      q.push(start) ;
      vis[start] = true ;

      int cnt = 0 ;

      while(!q.empty()){
           int u = q.front() ;
           q.pop() ;

           cnt++ ;

           if(u == k){
               
                cout << cnt << nl ;

                return ;
           }

           for(auto v : g[u]){

                 if(!vis[v]){

                     q.push(v) ; // push child at last of the queue ;

                     vis[v] = true ;
                 }
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

                bfs(1) ;


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
