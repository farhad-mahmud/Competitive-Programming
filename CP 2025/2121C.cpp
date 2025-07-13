#include <bits/stdc++.h>
using namespace std;

#define int  long long

#define nl       "\n" 

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
// Constants
const int N = 1e5 + 9;
const int MOD = 1e9 + 7;

void solve ()
{
             int n , m ; cin >> n >> m ;

             int a[n+2][m+2] ;

             int mx = 0 ;

             for(int i=1;i<=n;i++){

                  for(int j=1;j<=m;j++){
    
                         cin >> a[i][j] ;

                       mx = max(mx ,a[i][j]) ;
                  }
             }

            
              vector<int > rw(n+2,0),cl(m+2,0) ;
              int sum = 0 ;

             for(int i=1;i<=n;i++){

                   for(int j=1;j<=m;j++){

                        if(a[i][j]== mx){
 
                           rw[i]++ ;
                           cl[j]++ ;
                           sum++ ; 
                        }
                   }
             }

             
             bool f = false ;

             for(int i=1;i<=n;i++){
                int cnt =0 ;
                 for(int j=1;j<=m;j++){

                      cnt = rw[i] + cl[j] ;

                      if(a[i][j] == mx) {
                         cnt-- ;
                      }

                      if(cnt == sum){
                           f = true ;
                           break ;
                      }
                 }
             }

             if(f){
                 cout << mx - 1 << nl;
             }
             else {
                 cout << mx << nl; 
             }


}

int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

         cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
