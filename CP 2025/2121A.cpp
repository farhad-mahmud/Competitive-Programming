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
                   int n , s ;cin >> n >> s;

                   vector<int > a(n) ;

                   for(int i=0;i<n;i++){

                         cin >> a[i] ;
                   }                 

                    int mn = *min_element(a.begin() , a.end()) ;

                    int mx = *max_element(a.begin() , a.end()) ;

                   int dif1 = abs(s- mn) ;
                 

                   int dif2 = abs(s- mx) ;


                   int ans = (mx-mn) + min(dif1,dif2) ;                 

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
