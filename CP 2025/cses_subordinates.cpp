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
int dis[N], par[N], sub[N] ;


void dfs(int u,int p) {

      sub[u] = 0 ; // subtree.

      for(auto v : g[u]){

           if(v==p) continue ;

           dfs(v,u) ;

           sub[u] += 1 + sub[v] ;// 1 for direct child + all of its childs childrens ..
      }
}


void solve ()
{
              int n ; cin >> n ;

             
              for(int child =2 ;child<=n;child++){

                   int parent ; cin >> parent ;

                   g[parent].push_back(child) ;
                   g[child].push_back(parent) ;
              }

              dfs(1,1) ;

 
             for(int i=1;i<=n;i++){

                 cout << sub[i] << ' ' ;
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
