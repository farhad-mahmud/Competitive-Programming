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

                     int x, y, z ; cin >> x >> y >> z ;

                     int sum = 0 ;

                     int size = x+y +z ; 

                      sum += 1*y + 2*z ;

                        
                        cerr << sum << nl; 

                        if(size <=2){

                              if(sum >=2){

                                   yes ;
                                   return ;
                              }
                              else {

                                    no ;
                                    return ;
                              }
                        }

                     if(sum >= (size-1)){

                          yes ;
                     }
                     else {

                            no ;
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