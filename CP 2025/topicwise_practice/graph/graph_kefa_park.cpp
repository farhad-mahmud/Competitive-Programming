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

int m ,ans ;

vector<int >g[N] ;
bool vis[N] ;
int cat[N] ;
int consecutive_cats[N] ;


void dfs(int u,int p) {
    vis[u] = true;

    if(cat[u]){

        consecutive_cats[u] = consecutive_cats[p] + 1 ;
     }
     else{

        consecutive_cats[u] = 0 ;
     }

     if(consecutive_cats[u] >m){

           return ;
     }

     bool is_leaf = true ;

    for (auto v : g[u]) {
        if (!vis[v])
        {
            dfs(v,u);
            is_leaf = false ;
        } 
    }

    if(is_leaf){

         ++ans ;
    }
}
void solve ()
{
        int n;  cin >> n >> m; 

        for(int i=1;i<=n;i++){

             cin >> cat[i] ;
        }
         
        for(int i=1 ;i<n ;i++){

             int u , v ; cin >> u >> v ;

             g[u].push_back(v) ;
             g[v].push_back(u) ;

        }

        dfs(1,0) ;

        cout << ans << endl; 
         
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
