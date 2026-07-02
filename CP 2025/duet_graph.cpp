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

const int N = 3e5 + 5 ;

const int MOD = 1e9 + 7;

vector<int> g[N];
bool vis[N];
int dis[N] ;

int bfs(int start,int target) {

    if(start == target) return 0 ;

    queue<int > q ;
    q.push(start) ;
    vis[start] = true ;
    dis[start] = 0 ;
    while (!q.empty()) {
        int u = q.front() ;
        q.pop() ;

        for (auto v : g[u]) {

            if (!vis[v]) {

                dis[v] = dis[u] + 1 ;

                if(v == target) return dis[v] ;
                //cerr << v << ' ' << target << nl;
                vis[v] = true ;
                q.push(v) ; // push child at last of the queue ;
            }
        }
    }

    return -1 ;
}


void solve ()
{  
            int n, m ; cin >> n >> m ; 
            int a,b ,c ; cin >> a >> b >> c ;


          
            for(int i = 0; i <= n; i++) {
            g[i].clear();
            vis[i] = false;
            dis[i] = 0 ;
            }
            while(m--){
                 int u, v ; cin >> u >> v ;
                 // cerr << u << v << nl; 
                 g[u].push_back(v);
                 g[v].push_back(u);

            }

             int dis_a_b = bfs(a , b) ;

            for(int i = 0; i <= n; i++) {
               vis[i] = false;
               dis[i] = 0 ;
            }
             int dis_a_c = bfs(a, c) ; 

            for(int i = 0; i <= n; i++) {
                  vis[i] = false;
                  dis[i] = 0 ;
            }

            int dis_b_c = bfs(b,c) ; 


             //cerr << dis_a_b << ' ' << dis_a_c << ' ' << dis_b_c << nl; 


            //cerr << dis_b_c << nl;

             if(dis_a_b != -1){ // alice themselves connected..
                 cout << "Alice" << nl ;
             }
             else if(dis_a_c != -1 && dis_b_c != -1){ // alice ,bob both conn

                  if(dis_a_c > dis_b_c){
                       cout << "Bob" << nl;
                  }
                  else if(dis_a_c == dis_b_c) {
                       cout << "Tie" << nl;
                  }
                  else{
                       cout << "Alice" << nl;
                  }

             }
             else if(dis_a_c == -1 && dis_b_c != -1){ // bob conn, alice disconn
                  if(dis_b_c == 1){
                       cout << "Tie" << nl; 
                  }
                  else{
                      cout << "Alice" << nl ;
                  }
             }
             else if(dis_a_c != -1 && dis_b_c == -1){ // alice conn, bob discon
                   cout << "Alice" << nl;
             }
             else if(dis_a_c == -1 && dis_b_c == -1){  //alice bob both disconn
                     cout << "Tie" << nl;
             }
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
