#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   (x.begin(),x.end()) ;
#define nl  endl ;
const int  MOD = 1e9 + 7;
int  factorial(int n){

                int ans = 1 ;

                for(int i=2 ;i<=n;i++){

                       ans *=i ;
                }

                return ans ;

}

void solve ()
{
        

               int n ; cin >> n ;

               vector <int > f ;


               int an = ((n*n)/4) + 1  ;

               cout << an << endl; 

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
