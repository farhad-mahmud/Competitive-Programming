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
                    int w , h , a , b ; cin >> w >> h >> a >> b ;
                    int x1 , y1, x2, y2 ; cin >> x1 >> y1 >> x2 >> y2 ;


                   int gap1 = abs(x1 - x2) ;
                   int gap2 = abs(y1-y2);


                  

                   if(gap1 !=0 and gap1 % a ==0) {
                       yes ;
                   

                   }
                   else if(gap2 !=0 and gap2 % b ==0){

                        yes ;
                   }
                   else if(gap1 and gap2){

                         no ;
                   }
                  else if(gap1 == 0){

                         if(gap2 % b == 0){
                                yes
                          
                         }
                         else {
                            no;
                         
                           
                         }
                   }
                   else if(gap2 ==0){

                            if(gap1 % a ==0){
                                yes ;
                            
                                
                            }
                            else {

                                no ;
                             
                              
                            }
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
