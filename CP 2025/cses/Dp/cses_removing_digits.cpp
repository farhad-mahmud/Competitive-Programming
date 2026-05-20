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

const int N = 1e6 + 9;
const int MOD = 1e9 + 7;

int n ;
int dp[N];

int f(int n){
      if(n== 0) return 0 ;

      int nm = n ;
      vector<int > v;
      int sz = 0 ;

      if(dp[n] != -1){
           return dp[n] ;
      }
      bool used[10] = {0} ;
      while(nm >0){
          int d = nm % 10 ;
          if(!used[d] && d!= 0){
             used[d] = true ;
             v.push_back(d);
          }
          nm/=10 ;
          sz++ ;
      }
      //cerr << n << nl; 
      //output(v);

      int mn = 1e9 ;
      for(int i=0;i<v.size();i++){
            mn = min(mn,f(n-v[i]));
      }

      int ans = 1 + mn ;
      dp[n] = ans ;
      return ans ;

}
void solve ()
{  
          cin >>  n ;

          memset(dp,-1, sizeof dp);

          cout << f(n) << nl;
}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;

   //cin >> t ;

   while (t--) {

      solve() ;

   }


   return 0;
}
