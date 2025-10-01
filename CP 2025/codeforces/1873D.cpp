#include <bits/stdc++.h>

using namespace std;

#define int long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const int  MOD = 1e9 + 7;
void solve ()
{
        
         int n , k ; cin >> n >> k ;

           string s ; cin >> s ;

               
              int ans = 0;

       for (int i = 0; i < n;) {

           if (s[i] == 'B') {
            
               ans++;

               i += k;

              }
               else {

              i++;

               }
           }

        cout << ans << '\n';

             
               
                
                
}




int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

    int t = 1 ;
    cin >> t;
    while (t--) {


            solve() ;


    }

    return 0;
}
