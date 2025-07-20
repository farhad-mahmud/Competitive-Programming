#include <bits/stdc++.h>
using namespace std;

#define int  long long

#define nl       "\n" 

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
// Constants
const int N = 1e5 + 9;
const int MOD = 1e9 + 7;

void solve ()
{
             int n ; cin >> n ;

             string s ; cin >> s ;
             int ans = 0 ;

             for(int i=1;i<=n;i++){

                 for(int j= i ;j<=n;j+=i){

                       if(s[j-1] == '0'){

                            ans+= i ;
                            s[j-1] = '3' ;
                       }
                       else if(s[j-1] == '3'){
                            continue ;
                       }
                       else{
                           break; 
                       }
                 }
             }

             cout << ans << nl; 
   
}

int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

         cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
