#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)


#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   x.begin(),x.end() 
const int  MOD = 1e9 + 7;



void solve ()
{
        

                   int n ; cin >> n;

                   vector <int> c(n) ;

                   for(int i=0;i<n;i++){

                            cin >> c[i] ;
                   }


                   int unc = 0 ;

                   int red =0 ;
                   int blue = 0 ;

                   for(int i=0;i<n;i++){

                        
                            if(c[i] == 0){

                                    unc++;
                            }
                            else if(c[i] == 1){

                                    red++ ;
                            }
                            else {

                                   blue++ ;
                            }

                   }

                
                  // cout << "ucn " << unc << endl;

                 //  cout << "red " << red << endl;

                 //  cout << "blue " << blue << endl;

                    
                   int need = abs(red - blue) ;

                   

                   if(unc >= need && need % 2 == 1 && unc % 2 == 1){

                          yes ;
                          return ;
                   }
                   else if(unc >= need && need % 2 == 0 && unc % 2 == 0){

                         yes ;

                         return ;
                   }

                   else {

                              no ;
                   }


              


}


/* Hey you should check this out
    * solve test cases at first without watching note ;
    * int overflow, array bounds
    * reset global array and variable
    * look for special cases (n=1?)
    * do something instead of nothing and stay organized
    * bruteforce to find pattern
    * DON'T GET STUCK ON ONE APPROACH
    * Think the problem backwards
    * In practice time don't see failing test case
*/


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
