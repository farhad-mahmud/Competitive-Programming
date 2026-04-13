//---  Bismillahir Rahmanir Rahim ---//


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

// constrains

const int N = 1e9 + 9;
const int MOD = 1e9 + 7;


void solve ()
{  
          int p , q; cin >> p >> q ;

          int s = q*2 + p ;

          int x = 2*s + 1 ;

          for(int i= 3 ; i*i <= x ;i+=2){

               if(x % i == 0){
                   int b = x/ i;
                   int n = (i-1)/2 ;
                   int m = (b-1)/ 2;
                   if(n > 0 &&  m > 0){
                      if (q <= n * m + (n / 2) + (m / 2)) {
                            cout << n << " " << m << nl; 
                        return;
                      }
                   }
               }
          }
         
          cout << -1 << nl; 
}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;

   cin >> t ;

   while (t--) {

      solve() ;

   }


   return 0;
}
