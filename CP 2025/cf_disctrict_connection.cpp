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

const int N = 5000 + 9;
const int MOD = 1e9 + 7;

vector<int > g[N] ;
bool vis[N];
int dis[N], par[N], sub[N] ; // sub = subtree ..

// DFS


void solve ()
{  
            int n; cin >> n ;
            int a[N];
            for(int i=1;i<=n;i++){
                 vis[i] = false ;
            }
            set<int > st ;

            for(int i=1;i<=n;i++){
                  cin >> a[i];
                  st.insert(a[i]);
            }

            if(st.size() == 1){
                 no ;
                 return ;
            }
            yes ;
           
           int pos = -1 ;

           for(int i=2;i<=n;i++){
               if(a[i] != a[1]){
                    pos = i ;
                    break ;
               }
           }

           for(int i=2;i<=n;i++){
                if(a[i] != a[1]){
                     cout << 1 <<  ' ' << i  << nl; 
                }
            
           }

           for(int i=2;i<=n;i++){
               if(a[i] == a[1]){
                    cout << pos << ' ' << i << nl;
               }
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
