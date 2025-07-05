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
                      
          int a ,b , cost1 , cost2 ; cin >> a >> b >> cost1 >> cost2 ;
            
           
          int dif = (b-a) ;
        
          int cost =0 ;

          if(dif <0 && a % 2 == 0){

               cout << -1 << nl;
               return ;
          }
          else if(dif <0 && a % 2 ==1 && abs(dif) ==1){

                 cout << cost2 << nl;  
                 return ;
          }

          if(dif < 0 && abs(dif) > 1){

               cout << -1 << nl;
               return ;
          }
                




                 while(a != b){

 
                          if(a % 2 == 0){
                              
                                cost += min(cost1, cost2) ;
                                a++ ;

                          }   

                          else if(a % 2 == 1){

                                cost += cost1 ;
                                a++ ;
                          }
                 }


                 cout << cost << nl; 


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
