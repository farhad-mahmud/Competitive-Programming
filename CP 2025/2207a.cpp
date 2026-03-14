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
         int n ; cin >> n ;
         string s ; cin >> s ;

         //int cnt1 = count(all(s), '1');

         int cnt =0  ;

         for(int i=1;i<n-1;i++){
               if(s[i-1] == '1' && s[i+1] == '1'){
                      s[i] = '1';
               }
         }

         int mx = count(all(s) , '1');

          for(int i=1;i<n-1;i++){
               if(s[i-1] == '1' && s[i+1] == '1'){
                      s[i] = '0';
               }
         }

         int mn = count(all(s) , '1');


         cout << mn << ' ' << mx << nl ; 
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
