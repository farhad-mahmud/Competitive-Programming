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
           for(int i=1;i<=n;i++){ 
            cin >> a[i] ;
          }

          int cnt = 0 ;

          for(int i=1;i<=n-1;i++){
                 
                 int dif = 0 ;

               if(a[i] > a[i+1]){

                    dif = (a[i] - a[i+1]) ;

                    a[i+1] = a[i+1]+ dif ;

                    cnt+= dif ;
               }
          }


          cout << cnt << nl;

       
}

int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

        // cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
