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
                  int x1 , y1 , x2 ,y2 , x3, y3 ; 
                  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 ;

                  if(x1 == x2 && x2 == x3){
                     int sum = 0 ;
                     sum = y1 + y2 + y3 ;
                     if(sum == x1){
                         yes ;
                         return ;
                     }

                  }      
                  else if(y1 == y2 && y2 == y3){
                      int sum = 0 ;
                      sum = x1 + x2 + x3 ;
                      if(sum == y1){
                          yes ;
                          return ;
                      }
                  }


                  int mx1 = max(x1 ,max(x2,x3)) ;
                  int mx2 = max(y1, max(y2,y3)) ;

                  cerr << mx1 << " " << mx2 << nl; 

                  if(mx1 > mx2){
                       if(mx1 == x1){
                          if(x2 +x3 == x1 && y1 + y2 == x1 && y1 + y3 == x1){
                                    yes ;
                          }
                          else {
                            no ;
                          }
                       }
                       else if(mx1 == x2){
                            if(x1 + x3 == x2 && y2 + y3 == x2 && y2 + y1 == x2){
                                 yes ;
                            }
                            else {
                                 no ;
                            }
                       }
                       else {
                            if(x1 + x2 == x3 && y3 + y1 == x3 && y3 + y2 == x3){
                               yes ;
                            }
                            else {
                               no ;
                            }
                       }
                  }
                  else {
                           if(mx2 == y1){
                              if(y2 + y3 == y1 && x1 + x2 == y1 && x1 + x3 == y1){
                                    yes ;
                              }
                              else {
                                   no ;
                              }
                           }
                           else if(mx2 == y2){
                               if(y1 + y3 == y2 && x2 + x3 == y2 && x2 + x1 == y2){
                                    yes ;
                              }
                              else {
                                  no ;
                              }
                           }
                              else {

                              if(y1 + y2 == y3 && x2 + x3 == y3 && x3 + x1 == y3){
                                    yes ;
                              }
                              else {
                                   no ;
                              }

                              
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
