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

         int k , a , b , x , y ; cin >> k >> a >> b >> x >> y ;



                 
                   int ans = 0 ;

              while(k>= a || k >=b){


                      if(k >= a && k >=b){


                           if(x <y){

                              int fir = ((k-a) /x )+ 1 ;
                             
                               int cost_a = (fir*x);

                               ans += fir ;

                               k -=  cost_a ;


                           }
                           else {
                             
                                  int sec = ((k-b)/ y) + 1 ;

                                  int cost_b = (sec*y) ;

                                  ans += sec ;

                                  k -= cost_b ;
                              
                           }    

                            
                      }
                      else if(k >= a){


                               int fir = ((k-a) /x )+ 1 ;
                             
                               int cost_a = (fir*x);
                                ans += fir ;

                               k -=  cost_a ;
                          
                      }

                      else if(k >= b ){

                               int sec = ((k-b)/ y) + 1 ;

                                  int cost_b = (sec*y) ;
                                   ans += sec ;

                                  k -= cost_b ;                             
                       
                      }
              }


                 cout << ans << nl; 

            
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
