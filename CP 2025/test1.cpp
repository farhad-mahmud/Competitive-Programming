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

const int N = 100 ;
const int MOD = 1e9 + 7;


void solve ()
{  

     int n ; cin >> n ;

     int c0= 0 , c1 = 0 , c2 = 0 ;

     for(int i=0;i<n;i++){
        int w; cin >> w ;

        if(w==0)c0++ ;
        else if(w==1)c1++ ;
        else if(w==2)c2++ ;
     }


     int ans = c0 ;

     int p = min(c1,c2) ;

     ans += p ;
     c1-= p ;
     c2-= p ;

     ans+= c1/3 ;
     ans+= c2/3 ;

     cout << ans << nl; 


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
