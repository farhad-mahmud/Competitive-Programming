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

const int N = 1e5 + 9;
const int MOD = 1e9 + 7;

void solve ()
{        
      int n ; cin >> n ;
      int perm[n+1];

       perm[2] = 1 ;
       perm[3] = 3 ;
       if(n== 3){
          perm[1] = 2 ;
       }
       else {
          perm[1] = n ;
          perm[n] = n/2 ;
       }
       

      vector<bool > vis(n+1 ,false );
       vis[n] = true ;
       vis[1] = true ;
       if(n ==3){
           vis[2] = true ;
       }
       vis[3] = true ;
       vis[n/2] = true ;
      vector<bool > ind(n+1 ,false);
       ind[1] = true ;
       ind[2] = true ;
       ind[3] = true ;
       ind[n] = true ;

      for(int pj= n;pj>=1;pj--){
           
            for(int i=n;i>=1;i--){
                if(pj == i)continue ;
                if(ind[i]){
                   break ;
                }
                 int pi = (pj^i);
                 cerr << "pj " << pj << " i " << i << " pi " << pi << nl; 
                 if(pi >= 1 && pi <= n && !vis[pi]){
                  //cerr << "pj " << pj << " i " << i << " pi " << pi <<  nl ; 
                     if(!ind[i]){
                          perm[i] = pi ;
                          ind[i] = true ;
                          vis[pi] = true ;
                     }
                 }
            }
      }

      for(int i=1;i<=n;i++){
            cout << perm[i] << ' ' ;
      }

      cout << nl ;
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
