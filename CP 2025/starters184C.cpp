#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   (x.begin(),x.end()) ;
const int  MOD = 1e9 + 7;
void solve ()
{
        
                      int n ; cin >> n ;

                      string s ; cin >> s;

                      string t ; cin >> t ;

                     
                      int s_ones = 0 ;
                      int s_zeros = 0 ;

                      int t_ones = 0 ;
                      int t_zeros = 0 ;

                      for(int i=0;i<n;i++){

                              if(s[i] == '1'){


                                         s_ones++ ;
                              }
                              else {

                                    s_zeros++ ;
                              }

                              if(t[i] == '1'){

                                      t_ones++ ;
                              }
                              else {

                                      t_zeros++ ;
                              }
                      }

                      
                     for(int i=0;i<n;i++){

                            if(t[i] == '1' && s[i] != '1'){

                                    no ;

                                    return ;
                            }
                     }


                     
                     if((s_ones - t_ones) % 2 != 0){


                                no ;
                                return;
                     }

                  
                  yes ;


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
