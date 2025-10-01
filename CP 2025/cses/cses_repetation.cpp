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
// Constants
const int N = 1e5 + 9;
const int MOD = 1e9 + 7;

void solve ()
{
                string s ; cin >> s ;

                int len = s.length();
              
                
                int ans =1 ;
                int cnt =1 ;

            
                for(int i=1;i<len;i++){

                      if(s[i] == s[i-1]){

                            cnt++ ;
                      }
                      else {
                             cnt=1 ;
                          
                      }

                      ans = max(cnt ,ans) ;
                }

              
                   cout << ans << nl;
}

int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

         //cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
