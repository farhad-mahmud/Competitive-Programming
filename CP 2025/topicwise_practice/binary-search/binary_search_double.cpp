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

double f(double x){

     return x*x + sqrt(x) ;
}
void solve ()
{
           double c ; cin >> c ;
        
            double  l = 0 , r = 1e5 , ans = 0 ;

            
           while(r-l >= 1e-6){

               double mid = (l+r) / 2 ;

               if(f(mid) >=c){
                       
                    ans = mid ;

                    r = mid ;
               }
               else {

                    l = mid ;
               }
           }

      
         cout << fixed << setprecision(10) <<  ans << nl;  
 

}

int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

        // cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
