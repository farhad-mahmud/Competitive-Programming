//---  Bismillahir Rahmanir Rahim ---//

//------------------------------//
//        Author: Farhad       //
//------------------------------//

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

const int N = 1e5 + 9;
const int MOD = 1e9 + 7;

vector<int> g[N];
bool vis[N];
int dis[N], par[N], sub[N] ; // sub = subtree ..

// DFS

void dfs(int u) {
    vis[u] = true;
    for (auto v : g[u]) {
        if (!vis[v])
        {
            dfs(v) ;
        }
    }
}

// two drifts are connected if they share the same x or y ..
//if two points doesnt share same x ,or same y ,they are two different components ..


void solve ()
{
        int n ; cin >> n ;

        vector<pair<int,int>> d(N) ;

        for(int i=1;i<=n;i++){
                int x,y ; cin >> x >>y ;

                d[i] ={x,y} ;
        }

        for(int i=1;i<=n;i++){
          for(int j=i+1;j<=n;j++){
             if(d[i].first == d[j].first || d[i].second == d[j].second){

                  g[i].push_back(j);
                  g[j].push_back(i) ;
             }
          }
        }

        int cnt = 0 ;
        for(int u=1;u<=n;u++){

             if(!vis[u]){
                 dfs(u) ;
                 cnt++ ;
             }
        }

        cout << cnt -1 << nl;

}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;

   // cin >> t ;

   while (t--) {

      solve() ;

   }


   return 0;
}
