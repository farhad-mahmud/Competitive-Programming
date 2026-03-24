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
         int a,b,c, m ; cin >> a >> b >> c >> m ;


          int x = lcm(a,lcm(b,c));

         // cerr << x << nl;
          int yyy = m/ x ;

          int z = lcm(a,b);
          int k = lcm(a,c);
          int h = lcm(b,c);

          int zz = m / z;

          zz-= yyy ;

          int kk = m/ k;
          kk-=yyy ;
          int hh = m/h ;

          hh-=yyy ;

        
         // cerr << zz  << ' ' << kk << ' ' << hh << nl ;
          // alice visits..
          int adays = m / a ;

          int alice = (yyy*2) + (zz*3) + (kk*3) ;

          alice += (adays - (yyy+ zz+ kk)) * 6 ;

          int bob = (yyy*2) + (zz*3) + (hh*3);
          int bdays = m/ b ;

          bob += (bdays - (yyy+ zz+hh)) * 6 ;

          int carol = (yyy*2) + (kk*3) + (hh*3);

          int cdays = m/ c ;

          carol += (cdays - (yyy + kk + hh)) * 6 ;

          cout << alice << ' ' << bob << ' ' << carol << nl;

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
