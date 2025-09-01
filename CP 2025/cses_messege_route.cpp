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
const int N = 1e5 + 9;
const int MOD = 1e9 + 7;


vector<int> g[N];
bool vis[N];
int dis[N], par[N], sub[N] ; // sub = subtree ..


int n ;

void bfs(int u ) {

    queue<int > pq ;

    pq.push(u) ;

    par[u] = -1 ;

    vis[u] = true ;

    while (!pq.empty()) {

        int u = pq.front() ;

        pq.pop() ;

        for (auto v : g[u]) {

            if (!vis[v]) {

                vis[v] = true ;

                par[v] = u ;

                pq.push(v) ;
            }
        }

    }



}

void solve ()
{
     int  m ; cin >> n >> m ;

     set <int > st ;


    while (m--) {


        int u , v ; cin >> u >> v ;

        g[u].push_back(v) ;
        g[v].push_back(u) ;

        st.insert(u) ;
        st.insert(v) ;

    }

    bfs(1) ;

      //output(st) ;

      bool f = true ;

      int i= 1 ;

      for(auto j : st){

           if(i != j){

               f = false ;
           }

           i++ ;
      }
       

    
    if(!f || !vis[n] || par[n] == 0){

           cout << "IMPOSSIBLE" << nl;
    }
    else {

        vector<int > v ;

        int u = n ;// 5

        while (u != -1) {

            v.push_back(u);

            u = par[u];
        }


        reverse(v.begin() , v.end()) ;

        cout << v.size() << nl;

        for (auto i : v) {


            cout << i << ' ' ;
        }
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