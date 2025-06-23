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

int n ,k ;

bool f (int x){  

      return (x - x/n) >= k ;

}

void solve ()
{

           cin >> n >> k ;

           int l = 1 , r = 2e9 , ans = 1 ;
           
           while(l <= r){


               int mid = l + (r-l) / 2 ;

               if(f(mid)){

                     ans = mid ;

                     r = mid -1 ;

   
               }
               else {

                     l = mid +1 ;
               }
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
