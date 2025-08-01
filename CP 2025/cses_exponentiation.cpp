#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define nl       "\n" 

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
// Constants
const int N = 1e5 + 9;
const int MOD = 1e9 + 7;

// tc is log(n) ;

// divide and conqueror method with recursion ;;;

int power(int x,int n, int mod){
         

       if(n == 0 ) {

            return 1 % mod ;
       }

       if(x == 0 && n == 0 ){

            return 1 % mod ;
       }
      if(n % 2 == 0){  // n even ;

           int cur = power(x , n/2 ,mod ) ;

           return 1LL * cur * cur % mod ;  // cur*cur = x^(n/2) * x^(n/2)  == x^(n) ;
      }
      else {

            int cur = power(x,n/2,mod) ;

            return 1LL*cur *cur % mod * x % mod ; // did mod before mod , cause of overflow ;

      }

}

void solve ()
{

           int n ; cin >> n ;

           vector<int > a(n) , b(n) ;

           for(int i=0;i<n;i++){

               cin >> a[i] >> b[i] ;
           }
             

          
           for(int i = 0 ;i<n ;i++){

               cout << power(a[i], b[i] , MOD) << nl; 

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
