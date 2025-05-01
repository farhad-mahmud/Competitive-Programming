#include<bits/stdc++.h>

using namespace std;

#define int long long 

int32_t main(){

             

            int t ; cin >>t ;

            while(t--){



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


            return 0 ;

}