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

       perm[n] = 1;

      vector<bool > vis(n+1 ,false );
       //vis[1] = true ;
      vis[1] = true ;
      vector<bool > ind(n+1 ,false);
       ind[n] = true ;

       vector<int > pj ;
       pj.push_back(1) ;

       for(int i=n-1;i>=1;i--){
         int sz = pj.size();

         //cerr << i << nl; 
          for(int j=0;j<sz;j++){
               int x = pj[j] ;

               if(ind[i]){
                   break ;
               }
               int pi = x ^ i ;
               // cerr << pi << ' ' << x << ' ' << i << nl; 
               if(pi <1 || pi > n){
                   continue ;
               }

               if(!vis[pi]){
                    perm[i] = pi;
                    vis[pi] = true ;
                    ind[i] = true ;
                    pj.push_back(pi) ;
               }
          }
       }
      
       for(int i=1;i<=n;i++){
            if(!vis[i]){
                 perm[1] = i ;
                 break ;
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
