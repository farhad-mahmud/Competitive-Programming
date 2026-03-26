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
          int a, b ; cin >> a >> b;

         int ans = 1e9 ;
        for(int i= 0 ;i<=30;i++){
              int cur_b = b + i ;
              if(cur_b == 1) continue ;
              int cnt = i ;  // cst of b increment

              int tmp =a  ;

              while(tmp > 0){
                   tmp/=cur_b ;
                   cnt++;
              }

              ans = min (ans, cnt) ;

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
