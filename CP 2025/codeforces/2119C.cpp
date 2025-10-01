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

int last_set_bit(int n)
{
    int k = __builtin_clzll(n);
    return (64-k);
}
void solve ()
{

                   int n,l,r,k ; cin >> n>> l >> r >> k ;


                   if(n % 2 == 1){

                          cout << l << nl;
                   }

                   else if (n == 2){
                        cout << -1 << nl;
                   }
                   else {

                          int nxt = 1LL << last_set_bit(l) ;

                          if(nxt <= r){

                              if(k+2 > n){
                                   cout << nxt << nl;
                              }
                              else {
                                   
                                   cout << l << nl; 
                              }
                          }
                          else {
                              cout << -1 << nl ;
                          }
                   }




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
 