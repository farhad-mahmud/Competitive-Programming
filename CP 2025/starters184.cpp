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
        
                       int n ; cin >> n;

                       int rem = n % 3 ;
                      // int need = 

                      // cout << "rem :" << rem << endl;

                       if(rem == 0 ){


                              cout << n << endl;
                       }

                       else if (rem ==1 ){


                                   cout << n-1 << endl;

                       }
                       else if(rem == 2){


                               cout << n+1 << endl ;
                       }
                     
}




int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

         //cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
