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
 
vector<int> g[N];
bool vis[N];
int dis[N], par[N], sub[N] ; // sub = subtree ..
int c[N] ;
 
int ans[N] ;
 
set<int>dfs(int u , int p){
 
     set<int > parent ;
     parent.insert(c[u]) ;
 
     for(auto v : g[u]){
 
          if(v==p) continue ;
 
          set<int> child = dfs(v,u) ; // childs set 
 
          if(child.size() > parent.size()){
                swap(child, parent);
          }
 
          parent.insert(child.begin(),child.end()) ;
     }
 
    ans[u] = parent.size() ;
     
      return parent ;
}
 
void solve ()
{
               int n ; cin >> n ;
 
 
               for(int i=1;i<=n;i++) cin >> c[i] ;
 
               int m = n-1 ;
 
              while(m--){
 
                   int u , v ; cin >> u >> v ;
 
                   g[u].push_back(v) ;
 
                   g[v].push_back(u) ;
                   
              }
         
 
              dfs(1,-1) ;
 
              for(int i=1;i<=n;i++){
 
                   cout << ans[i] << ' ' ;
              }
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
