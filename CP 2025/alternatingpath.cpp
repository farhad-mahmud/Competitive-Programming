//---  Bismillahir Rahmanir Rahim ---//


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

// constrains

const int N = 2e5 + 9;
const int MOD = 1e9 + 7;


vector<int> g[N];
bool vis[N];

int col[N];

int c0=0, c1 =0 ;

bool f = true ;

void dfs(int u, int c){
      vis[u] = true ;

      col[u] = c ;
      if(c == 0){
           c0++;
      }
      else{
           c1++ ;
      }

      for(auto v : g[u]){

            if(!vis[v]){
                  dfs(v, 1- c); 
            }
            else {
                if(col[v] == col[u]){
                    f = false ;
                }
            }
      }
}

void solve ()
{  
         int n, m ; cin >> n >> m;

         for(int i=1;i<=n;i++){
            g[i].clear();
            vis[i] = false;
       }
         while(m--){
              int u,v ; cin >> u >> v ;
              g[u].push_back(v);
              g[v].push_back(u);

         }

         for(int i=1;i<=n;i++){
              col[i] = -1 ;
         }

               int ans = 0 ;
               for(int i=1;i<=n;i++){
                     
                    if(!vis[i]){  
                           c0 = 0 ;
                           c1 = 0 ;
                           f = true ;
                          dfs(i,0);
                           if(f){
                              ans+= max(c0,c1);
                           }
                    }

                  
               }


               cout << ans << nl; 

}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;

   cin >> t ;

   while (t--) {

      solve() ;

   }


   return 0;
}
