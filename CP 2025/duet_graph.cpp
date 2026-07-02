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

const int N = 1e6 + 5 ;

const int MOD = 1e9 + 7;

vector<int> g[N];
bool vis[N];

void bfs(int start) {

    queue<int > q ;
    q.push(start) ;
    vis[start] = true ;

    while (!q.empty()) {
        int u = q.front() ;
        q.pop() ;

        for (auto v : g[u]) {

            if (!vis[v]) {

                q.push(v) ; // push child at last of the queue ;

                vis[v] = true ;
            }
        }
    }
}

void solve ()
{  
            int n, m ; cin >> n >> m ; 
            int a,b,c; cin >> a >> b >> c ;

            while(m--){
                 int u, v ; cin >> u >> v ;

                 g[u].push_back(v);
                 g[v].push_back(u);

            }



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
