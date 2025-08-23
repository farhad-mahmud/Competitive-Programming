#include <bits/stdc++.h>
using namespace std;

#define ll  long long

#define nl       "\n" 

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define pii pair<int,int>
#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
#define dbug(x) cerr << (#x) << " is " << (x) << nl;
#define output(a) for(auto &it: a) cerr<<it<<" "; cerr<<nl;
// Constants
const int N = 2e5 + 9;
const int MOD = 1e9 + 7;

vector<vector<int >> g[N] ;

vector<pii> edge[N] ;
vector<pii> redge[N] ;
ll dist[N] , rdist[N] ;

struct Node {

      int node ;
      ll cost;
      bool stat ;

      Node(int a,ll c,bool f){

            node = a ;
            cost = c ;
            stat = f ;

      }
};

bool operator<(Node a ,Node b){

       return a.cost > b.cost ;
}

void dijkstra(){

        priority_queue<Node > pq ;   // heap of Node objects ;
        pq.push(Node(1,0,true)) ;
        dist[1] = 0 , rdist[1] = 0 ;

        while(!pq.empty()){

             auto s = pq.top() ;
             pq.pop() ;

             int node = s.node ;
             ll cost =  s.cost ;
             bool stat = s.stat ;

             if(cost != dist[node] && cost != rdist[node]) continue ;

             if(stat){

                  for(auto i : edge[node]){

                        int v = i.first ;
                        int w = i.second ;

                        if(dist[v] > w + cost){

                              dist[v] = w + cost  ;
                              pq.push(Node(v, dist[v],true));
                        }
                  }
             }

             for (auto i : redge[node]){

                   int v = i.first ;
                   int w = i.second ;

                    if(rdist[v] > w + cost){

                          rdist[v] = w + cost ;

                          pq.push(Node(v,rdist[v], false)) ;
                    }
             }

        }

}
void solve ()
{
                int n , m ; cin >> n >> m ;

                int u, v, w ;

                for(int i=1;i<=n;i++){

                      dist[i] = 1e18 ;
                      rdist[i] = 1e18 ;
                }

                while(m--){

                      cin >> u >> v >> w ;

                      edge[u].push_back({v,w});
                      redge[v].push_back({u,w}) ;
                }

                dijkstra() ;

                for(int i=2;i<=n;i++){

                    ll mn = min(rdist[i] , dist[i]);

                    if(mn == 1e18){
                         cout << -1 << ' ' ;
                    } 
                    else {

                         cout << mn << ' ' ;
                    }
                }

                cout << nl; 


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
