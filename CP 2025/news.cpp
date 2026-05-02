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

const int N = 5e5 + 9;
const int MOD = 1e9 + 7;

vector<int> g[N];
bool vis[N];
int sz[N] ;
// DFS
vector<int > curr_comp ;


void dfs(int u) {
    vis[u] = true;

    curr_comp.push_back(u); // all the visited.. nodes.. of a specific..component.. ..

    for (auto v : g[u]) {
        if (!vis[v])
        {
            dfs(v);
        }
    }

}

void solve ()
{  
            int n ,m ; cin >>n >> m ;

           
            while (m--) {

            int k; cin >> k;
            vector<int> group(k);
            for (int i = 0; i < k; i++) {
            cin >> group[i];
             }

            for (int i = 1; i < k; i++) {
                g[group[0]].push_back(group[i]);
                g[group[i]].push_back(group[0]);
             }

           }


          
           for(int u=1 ;u<=n;u++){
                  if(!vis[u]){
                       curr_comp.clear();
                       dfs(u);

                       int size = curr_comp.size() ;

                       for(auto n : curr_comp){
                           sz[n] = size ;
                       }
                  }
           }


           for(int i=1;i<=n;i++){
                cout << sz[i] << ' ' ;
           }

           cout << nl; 

          
}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;

   //cin >> t ;

   while (t--) {

      solve() ;

   }


   return 0;
}
