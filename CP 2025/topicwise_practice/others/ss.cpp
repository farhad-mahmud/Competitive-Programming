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
const int N = 2e5 + 9;
const int MOD  = 1e9 + 7;


int binpow(int a, int b ,int mod ) {
     int res = 1;
     while(b >0){
          if(b & 1){
               res = res * a % mod ;
               a = a * a % mod ;
               b >>= 1;
          }
          else {
              a = a * a % mod ;
              b >>=1 ;

          }
     }

     return res ;
}


void solve ()
{
                 int a , b , c ; cin >> a >> b >> c ;

                 int b_c = binpow(b,c,MOD-1) ;

                // cerr << b_c << nl;

                 int ans = binpow(a, b_c,MOD) ;


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
