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
int ways[N] ;

int count(int n){
   if(n == 0) return 1 ;
   if(ways[n] != -1) return ways[n];
    int ans = 0 ;
    for(int i=1;i<=n;i++){
        ans += count(n-i) ;
        ans = ans % MOD ;
    }
    ways[n] = ans ;
    return ans ;
}
void solve ()
{     

   memset(ways, -1 , sizeof ways) ;

   cout<< count(4) << nl; 

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
