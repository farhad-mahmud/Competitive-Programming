#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const int  MOD = 1e9 + 7;
void solve ()
{
         
                 
                int n ; cin >> n ;

                   int h[n] ;

                   for(int i=0 ;i < n;i++){

                          cin >> h[i] ;
                   }
                  
                
                  int sec = 0 ;

            

                    if(n==1){

                            cout << h[0] + 1 << endl ;

                            return ;
                    }


                for(int i= 0 ;i< n-1 ;i++){

      
                       

                            if(i==0){

                                  sec += h[i] + 1 ;
                            }


                            if(h[i] <= h[i+1]){

                                   sec +=  1 + (h[i+1] - h[i]) + 1 ;

                            }

                            else { 


                                     sec += (h[i] - h[i+1]) + 2 ;
                            }
                }

                       
                        cout << sec << endl; 
}




int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

      //   cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
