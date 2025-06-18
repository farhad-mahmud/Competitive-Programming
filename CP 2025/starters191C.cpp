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

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0) return false;
    return true;
}


void solve ()
{
              
               int x ,y ; cin >> x >> y ;

               
               if(__gcd(x,y ) > 1){

                     cout << 0 << nl;
                     return ;
               }


               if(__gcd(x+1,y) > 1 || __gcd(x,y+1) > 1){

                       cout << 1 << nl; 

                       return ;
               }



               cout << 2 << nl; 

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
