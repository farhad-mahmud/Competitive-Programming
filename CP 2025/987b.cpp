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

const int N = 1e5 + 9;
const int MOD = 1e9 + 7;

// int binpow(int a, int b){
//      int res = 1 ;
//      while(b > 0){
//         if(b&1) res = res * a % MOD ;
//         a = a * a % MOD ;
//         b >>= 1 ;
//      }
//      return res ;
// }
void solve ()
{  
      int x , y ; cin >> x >> y ;

      if(x == y){
          cout << "=" << nl;
          return ;
      }

      if(x == 1){
           cout << "<" << nl;
      }
      else if(y==1){
           cout << ">" << nl;
      }
      else if(x == 2 && y == 3 || y == 2 && x ==3){
            if(x < y){
            cout << "<" << nl;
             }
             else {
                cout << ">" << nl;
             }
      }
      else if(x == 2 && y ==4 || y == 2 && x == 4){
            cout << "=" << nl;
      }
      else {

            if(x < y){
                 cout << ">" << nl;
            }
            else {
                cout << "<" << nl; 
            }
      }


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
