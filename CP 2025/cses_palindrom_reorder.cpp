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
         string s; cin >> s ;


         map<int,int > mp;

         for(int i=0;i<s.size();i++){
               mp[s[i]]++;
         }

         int cnt = 0 ;
         string t ;
         string mid ;
         for(auto [a,f] : mp){
               if(f % 2 != 0){
                    for(int i=0;i<f;i++){
                          mid+= a;
                    }
                    cnt++ ;
               }
               else{
                   for(int i=0;i<f/2;i++){
                       t+=a ;
                   }
               }
         }

         if(cnt > 1){
              cout << "NO SOLUTION" << nl;
          }
          else{
               string z =t ;

               reverse(all(t));

               cout << z << mid << t << nl;
          }


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
