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

           vector<int > a(n+1);

           for(int i=1;i<=n;i++){

                  cin >> a[i] ;
           }
          
           vector<int > pref_min(n+2) ;

            pref_min[0] = 1e18 ;

            int sum1 = 0;
            int sum2 =0 ;

           for(int i=1;i<=n;i++){

                pref_min[i] = min(pref_min[i-1], a[i]) ; 
                sum1 += pref_min[i] ;
           }

           a[3] = 0 ;

           vector<int > pref_min2(n+2) ;

           pref_min2[0] = 1e18 ;
               
         for(int i=1 ;i<=n;i++){

               pref_min2[i] = min(pref_min2[i-1] , a[i]);

               sum2 += pref_min2[i] ;
         }
            
           
           int ans = min(sum1,sum2) ;

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
