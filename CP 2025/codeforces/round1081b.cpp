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

      int cnt1 = count(all(s),'1');
      int cnt0 = count(all(s) ,'0');

      if(cnt0 == n){
          cout << 0 << nl; 
          return ;
      }

      if(cnt1 % 2 == 1 && cnt0 % 2 == 0){
            cout << -1 << nl ;
      }
      else {
           if(cnt1 % 2 == 0){
            cout << cnt1 << nl ;
            for(int i=0;i<n;i++){
                 if(s[i] == '1'){
                     cout << i+1 << ' ' ;
                 }
            }
            cout << nl ;
          }
          else if(cnt0 % 2 == 1){

                   cout << cnt0 << nl ;
            for(int i=0;i<n;i++){
                 if(s[i] == '0'){
                     cout << i+1 << ' ' ;
                 }
                }
             cout << nl ;
          }
      }
      
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
