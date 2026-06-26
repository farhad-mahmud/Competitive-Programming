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

const int MOD = 1e9 + 7;
map<int, int> dp;

int a, b; 
int f(int cur){
     if(cur > b){
        return 0 ;
     }   

     cerr << cur << nl ;
     if(cur == b){
        return 1;
     }
     if(dp.count(cur)){
         return dp[cur] ;
     }
     int ans = f(cur*2) ;
     ans = ans + f(cur*10 + 1) ;

     return dp[cur] = ans ;
}

void solve ()
{  
        cin >> a >> b ;
        dp.clear();
        cout << f(a) << nl;
}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);
   int t = 1 ;
   while (t--) {
      solve() ;
   }
   return 0;
}