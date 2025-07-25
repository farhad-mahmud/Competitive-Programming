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

           int n ; cin >> n;
            
          vector<int > a(n+1) ;
          vector<int > pref_sum(n+1) ;

          for(int i=1 ;i<=n;i++){

                cin >> a[i] ;
          }

                  pref_sum[0] = 0 ;

                for(int i=1 ;i<=n;i++){ 

                   pref_sum[i] = pref_sum[i-1] + a[i] ;
                   pref_sum[i] = pref_sum[i] % n ;
                   pref_sum[i] = (pref_sum[i] + n) % n ; 


                 } 
          

            map < int ,int > mp ;
            mp[0]++ ; 

            int ans = 0 ;

            for(int j= 1 ;j<=n;j++){

                ans += mp[pref_sum[j]] ;

                mp[pref_sum[j]]++ ; 

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
