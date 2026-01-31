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
      int n,s,r ; cin >> n >> s >> r ;

      cout << s-r << ' ' ;

      int d = r / (n-1) ;


      if(r % (n-1) == 0){
           for(int i=1;i<=n-1;i++){
                cout << d << ' '  ;
           }
           cout << nl ;
      }
      else {
          int rem = r % (n-1) ;
        // cerr << d << ' ' << rem << nl;
          
           for(int i=1;i<=n-1;i++){
                if(rem >0){
                cout << d + 1<< ' ' ;
                }else {
                 cout << d << ' ' ;
                }
                rem-- ;
           }

           cout << nl;

      }

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
