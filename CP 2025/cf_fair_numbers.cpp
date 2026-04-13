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

bool ok (int n ){

   int k = n;
      while(n > 1){
          int d = n % 10 ;
          //cerr << d << nl;
          if(d != 0 && k % d != 0){
              return false ;
          }
          n /=10 ;
      }

    return true ;
}

void solve ()
{  
         int n ; cin >> n ;

         while(!ok(n)){
              n++ ;
         }
         

         cout << n << nl ;
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
