//---  Bismillahir Rahmanir Rahim ---//


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

// constrains

const int N = 1e5 + 9;
const int MOD = 1e9 + 7;


void solve ()
{  
         ll  n ; cin >> n ;

      ll total = 0 ;
      ll i = 1 ;
      while(i <=n){
         ll q = n /i ;
         ll nxt_i = n/q + 1 ; //  when , q = 1 , nxti  is , n + 1 
         ll count = (nxt_i - i) ;// , so nxt_i - i , means , 3,4,5 , 
                        // will contribute 1 always ,, to sum ,, by .. 

         ll sum_i = (((i+ nxt_i - 1 ) % MOD)* (count % MOD )) % MOD ;// this is 3+4+5 ..
         sum_i = (sum_i * ((MOD + 1)/2)) % MOD ;
         total = (total + (q  % MOD )* sum_i) % MOD ;
         i = nxt_i ;

      }


      cout << total << nl ;
      

}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;

   // cin >> t ;

   while (t--) {

      solve() ;

   }


   return 0;
}
