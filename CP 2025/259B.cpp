#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const int  MOD = 1e9 + 7;
void solve ()
{
        
                       int g[3][3] ;

                        int sum = 0;


                       
                       for(int i=0 ;i<3;i++){

                        for(int j=0 ;j<3 ;j++){
                                                                 // took the input ;
                                cin>> g[i][j] ;

                                sum += g[i][j] ;
 
                             }
                       }

                       sum /= 2 ;

                      // cout << sum << endl; 

                       g[0][0] = sum - g[0][1] - g[0][2] ;
                       g[1][1] = sum - g[1][0] - g[1][2] ;
                       g[2][2] = sum - g[2][0] - g[2][1] ;



                     for(int i= 0 ; i< 3 ;i++){

                               for(int j= 0 ; j< 3 ; j++){

                                      cout << g[i][j] << " " ;
                               }

                               cout << endl; 
                     }

                    


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
