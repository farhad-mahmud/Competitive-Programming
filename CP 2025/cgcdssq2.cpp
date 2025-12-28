
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

     int n ; cin >> n ;
     vector<int > a(n+1) ; for(int i=1;i<=n;i++)cin>> a[i] ;


     vector<pair<int,int >> v ;
    
     map<int,ll> ans ;

     for(int i=1;i<=n;i++){

      vector<pair<int,int >> u ;
      u.push_back({a[i] , 1});
      for(auto [x,c] : v){
          int g = __gcd(x,a[i]) ;
          if(g == u.back().first){
            u.back().second += c ;
          }
          else {
             u.push_back({g,c}) ;
          }
      }
      v= u ;
      for(auto [x,c] : v){
           ans[x] = ans[x] + c ;
      }
     }

     int q ; cin >> q ;

     while(q--){
         int x ; cin >> x ;

         cout << ans[x] << nl; 
     }

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

