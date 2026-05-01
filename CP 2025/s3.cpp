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

const int N = 1e9 + 9;
const int MOD = 1e9 + 7;


void solve ()
{  
            
          int n ; cin >> n ; 

          int cnt = 0 ;

          for(int i=1 ;i<1e6 ; i++){
               string s = to_string(i);

               string xs =  s + s ;

               int x = stoll(xs);

               if(x <=n) cnt++ ;


               else if(s.size() * 2 > n){
                     break ;
               }

          }

          cout << cnt << nl ;

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
