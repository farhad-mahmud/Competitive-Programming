#include <bits/stdc++.h>
using namespace std;

#define ll  long long

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


ll lcm(ll a, ll b) { return (a / __gcd(a, b)) * b; }

void solve ()
{
                   ll a , b ; cin >> a  >> b ;


                   vector<ll > p = {2 , 3, 5 , 7} ;

                   ll ans = b-a + 1 ;


                   for(ll mask = 1 ;mask <16 ;mask++){ // loop through subset of 4 the primes

                        int bit =0 ; // how many primes are in the current subset 
                        ll lc = 1;  // lcm of the current subset of primes ;

                        // we'll use lcm to cnt how many numbers in [a,b] are divisible by all primes
                        // in the subset ;

                        for(int i=0;i<4;i++){   // for each prime

                              if(mask &(1 << i)){ // wether the ith prime is in the current subset

                                  bit++ ;
                                  lc = lcm(lc,p[i]) ;
                              }
                        }

                        if(lc > b) continue ; // lcm is too large skip


                        if(bit & 1){

                              ans -= (b/lc) ;  // if odd substract ;

                              if(lc < a){

                                  ans += (a-1)/ lc ;
                              }
                        }
                        else {
                             ans += (b/lc) ;

                             if(lc <a){
                                ans -= (a-1) / lc ;
                             }
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
