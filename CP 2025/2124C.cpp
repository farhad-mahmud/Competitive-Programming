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

int lcm(int a, int b) {

 return (a / __gcd(a, b)) * b;

}


void solve ()
{
                   int n ; cin >> n ;

                   vector<int > b(n) ;

                   for(int i=0;i<n;i++){
                         cin >> b[i] ;
                   }

                
                    int ans = 1 ;

                   for(int i= 0 ;i<n-1;i++){
                          
                         int g = __gcd(b[i] ,b[i+1]) ;

                          int factor = (b[i] / g) ;
                           
                           ans = lcm(ans , factor) ;

                   }

                   cout << ans << nl; 
              
                   

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
