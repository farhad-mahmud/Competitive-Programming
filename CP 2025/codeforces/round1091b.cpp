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

const int N = 1e9 + 9;
const int MOD = 1e9 + 7;


void solve ()
{  
            int n,k ; cin >> n >> k ;

            vector<int > a(n+1); for(int i=1;i<=n;i++)cin >> a[i];

            vector<int > p(k+1); for(int i=1;i<=k;i++)cin >> p[i];

            // k = 1 .. 
            
            int m = p[1];

            bool ff = false ;
            for(int i=1;i<=n;i++){
                  if(a[m] != a[i]){
                        ff = true ;
                  }
            }

            if(!ff){
                 cout << 0 << nl;
                 return ;
            }

          
            if(a[m] == 0){
                // find 1..
               int left = 0;
                for(int i=1;i<=m;i++){
                     if(a[i] == 1){
                           left = i ;
                           break ;
                     }
                }

                int lcnt = 0 ;
                for(int i=left;i<m;i++){
                     if(a[i] != a[i+1]){
                           lcnt++ ;
                     }
                }

                
                int right = 0;

                for(int i=n;i>=m;i--){
                      if(a[i] == 1){
                          right = i ;
                          break ;
                     }
                }
               
                int rcnt = 0 ;
                for(int i=m;i<right;i++){
                     if(a[i] != a[i+1]){
                          rcnt++ ;
                     }
                }

                cout << max(lcnt +1 , rcnt + 1) << nl;

            }
            else {

                 // find 0..
               int left = 0;
                for(int i=1;i<=m;i++){
                     if(a[i] == 0){
                           left = i ;
                           break ;
                     }
                }

                int lcnt = 0 ;
                for(int i=left;i<m;i++){
                     if(a[i] != a[i+1]){
                           lcnt++ ;
                     }
                }

                
                int right = 0;

                for(int i=n;i>=m;i--){
                      if(a[i] == 0){
                          right = i ;
                          break ;
                     }
                }
             
                int rcnt = 0 ;
                for(int i=m;i<right;i++){
                     if(a[i] != a[i+1]){
                          rcnt++ ;
                     }
                }

                cout << max(lcnt +1 , rcnt + 1) << nl;
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
