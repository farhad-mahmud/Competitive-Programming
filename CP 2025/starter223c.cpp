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


void solve ()
{  
      int n , x , k ; cin >> n >> x >> k ;


      if(x >= k){

            if(x % k == 0){
                 cout << 0 << nl;
            }
            else {
            int left = x % k ;

            int fact = x/ k ;

            int up = abs((fact*k + k) - x) ;

            int down = abs(fact*k- x);

            //cerr << left << ' ' << fact << nl ;
            //cerr << up << ' ' << down <<nl ;
            if(x + up <= n){
                 cout << min(x, min(up,down)) << nl;
            }
            else{
                  cout << min(x,down) << nl; ;
            }
            //cout << min(up,down) << nl ;
         }

            
      }
      else {
              int dif = k- x ;

              if(dif + x <= n){

                  cout << min(dif , x) << nl ;
              }
              else {
                 cout << x << nl ;
              }
          
        }



      // int dif = abs(k-x);
      // int dif2 = (k-0);


      // cout << min(dif,dif2) << nl;


      //cout << ans << nl ;
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
