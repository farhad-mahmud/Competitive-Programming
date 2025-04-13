#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const int  MOD = 1e9 + 7;
void solve ()
{
        
                   int n , m , l , r ; cin >> n >> m >> l >> r ;

                   int dif = (n - m) ;

                   int new_r = 0 ;
                 
                     
                      new_r = (r - dif) ;

                      int new_l = 0 ;

                     

                      if(new_r < 0) {

                        int l_increment = abs(0-new_r) ;

                           new_l = (l + l_increment ) ;

                           cout << new_l <<  " " << 0 << endl; 

                      }
                      else {


                             cout << l << " " << new_r << endl; 
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
