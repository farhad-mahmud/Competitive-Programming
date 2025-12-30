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

const int N = 105 ; 
const int MOD = 1e9 + 7;
int W ; 
int n, w[N] ,v[N], dp[N][100005] ;
int rec(int i , int weight){  // state .. 

   if(i == n+1) return 0 ;  // base case ..  
   // if any specific state was already called before .
   if(dp[i][weight] != -1) return dp[i][weight] ;

   int ans = rec(i+1 , weight) ; // weight nibo na ..
   // weight nibo..
   if(weight + w[i] <= W) ans = max(ans , rec(i+1, weight + w[i])+ v[i] );

   dp[i][weight] = ans ;  // memorizing dp ,, 

   return ans ; 

}
void solve ()
{  

      cin >> n >> W ; 
     for(int i=1;i<=n;i++){
         cin >> w[i] >> v[i] ;
     }

     memset(dp , -1 ,sizeof dp) ;

     cout << rec(1,0) << nl ;

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
