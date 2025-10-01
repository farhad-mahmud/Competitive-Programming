#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)


#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   (x.begin(),x.end()) ;
const int  MOD = 1e9 + 7;

#define sq(x)        ((x)*(x))

void solve ()
{
        

         
               int  r , x, y , xf, yf ;

               cin >> r >> x >> y >> xf >> yf  ;


               long double dis = sqrt(sq(xf-x) + sq(yf - y)) ; 

               long double rotations = ceil(dis/(2.0*r)) ;

              
              cout << rotations << endl; 

          
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
