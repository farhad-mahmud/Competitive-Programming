#include <bits/stdc++.h>
using namespace std;

#define int  long long

#define nl       "\n" 

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
#define dbug(x) cerr << (#x) << " is " << (x) << nl;
#define output(a) for(auto &it: a) cerr<<it<<" "; cerr<<nl;
// Constants
const int N = 1e5 + 9;
const int MOD = 1e9 + 7;

bool is_prime(int n) {

    if(n== 1) return false ;

    for(int i=2 ;i<n;i++){
         if(n % i == 0){

            return false;
         }
    }
    return true ;
}

void solve (int k)
{
           
            int n ; cin >> n ;

              cout << "Case " << k << ": " << n << " = " ;   
            
            for(int p=1;p<=n;p++){
                    
                 if(is_prime(p)){

                   int exponent = 0 ;
                    for(int i=1;i<=n;i++){

                      int x = i ;
                       while(x % p == 0){

                          exponent++ ;
                          x /= p ;
                       }
                    }
                       
                      if(p != 2) cout << "* " ;
                    cout << p << " (" << exponent << ") " ; 
                 }
            }
            
        cout << nl; 
            
}

int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

         cin >> t ;

         int k = 1 ;

         while(t--){

            solve(k) ;
            
             k++ ;
        }   


    return 0;
}
