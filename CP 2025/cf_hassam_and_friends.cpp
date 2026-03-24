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


void solve ()
{  
          int n , m ; cin >> n >> m ;
       vector<int> nearest_enemy(n + 1, 0);

       for(int i=0;i<m;i++){
          int a,b; cin >> a >> b ;
          if(a > b) { 
               swap(a,b); 
          }

          nearest_enemy[b] = max(nearest_enemy[b], a);

       }

       vector<int > maxleft(n+1);

       maxleft[1] = 1;
       int ans = 1 ;

       for(int i=2;i<=n;i++){
            maxleft[i] = max(maxleft[i-1] , nearest_enemy[i] + 1);

            ans += i - maxleft[i] + 1 ;
       }

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
