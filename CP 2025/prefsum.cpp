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


const int N = 1e5 + 9 ; 

void solve ()
{
        
          int n ; cin >> n;
            
          vector<int > a(n) ;

          for(int i=1 ;i<=n;i++){

                cin >> a[i] ;
          }

          int q ; cin >> q; 


         // cout << "h" << endl; 
          
          while(q--){

                  int l, r ; cin >> l >> r ;

                   int sum = 0 ;

                   for(int i=l ; i<= r ;i++){

                       sum += a[i] ;

                   }

                   cout << sum << endl; 
          }

         
         // tc (q * n) ;
          // if q = 10^5 , n = 10^5 , then tc = (q*n) = (10^5* 10^5) == mara khawa ;

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
