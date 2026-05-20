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
                int n ; cin >>n ;

                vector<int > a(n+1) ;

                for(int i=1;i<=n;i++){
                     cin >> a[i] ;
                }

             sort(a.begin()+1,a.begin()+n+1) ;
             
              int cur_sum = 1 ;

              for(int i=1;i<=n;i++){

                  if(a[i] >cur_sum ){
                    // cerr << a[i] << ' ' << cur_sum << nl; 
                       break;                     
                  }
                  else { 
                        cur_sum += a[i] ;                        
                  }
              } 

               cout << cur_sum << nl; 

             
}

int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

        // cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
