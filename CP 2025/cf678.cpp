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


int lcm(int a, int b) { return (a / __gcd(a, b)) * b; }

void solve ()
{  
      int n,a, b, p, q;  cin >> n >> a >> b >> p >> q ;

      bool red = false ;
      bool blue = false ;
      if(p == q){
         red = true ;
      }
      else if(p > q){
         red = true ;
      }
      else{
         blue = true ;
      }

      int cnta = n/a ;
      int cntb = n /b ;
      int ab = lcm(a,b) ;
      int cntab = n/ ab ;

      cnta -= cntab ;
      cntb -= cntab ;

      int ans = 0 ;
      if(red){
         ans += cntab* p ;
      }
      else {
         ans += cntab * q ;
      }

      ans += (cnta*p) + (cntb*q)  ;


      cout << ans << nl;
     
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
