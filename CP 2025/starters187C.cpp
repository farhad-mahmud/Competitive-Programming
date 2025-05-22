#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
#define vi       vector<int > 
#define  forr    for(auto &i : x) 
const int  MOD = 1e9 + 7;


void solve ()
{

                    int x , y , k ; cin >> x >> y >> k ;

                    int total_stone = x+y ;

                    //for alices first turn ;

                    int nxt_need = 0 ;



                     int mx = max(x,y ) ;

                     int need = 0;


                    
                     if(mx > k){

                           need = k + 1;
                                
                           if(mx == x){
                              
                              x -= k ;
                           }

                           else {

                               y -= k ;
                           }
                          
                     }

                     else {

                           need = mx + 1 ;
                            
                            if(mx == x){

                               x -= x ;
                            }
                            else {

                                y -= y ;
                            }

                     }

                          
                          //cout << need << endl ;
                      

                      

                     if(need <= x || need <= y){

                           cout << "Bob" << endl;
                     }
                     else {

                           cout << "Alice" << endl; 
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
