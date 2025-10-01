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

           vector<int > a(n) ;

           for(int i= 0 ;i<n ;i++){

                 cin >> a[i] ;
            }
          
           sort(a.begin() , a.end()) ;
 
             int ans = 0 ;

            for(int i =0 ;i<n;i++){
               for(int j = i+1 ;j<n ;j++){

                     int x = a[n-1] - a[i] - a[j]  ;
                      
                     int l = upper_bound(a.begin() + j + 1, a.end() , x ) - a.begin() ;

                     int y = a[i] + a[j] ;
                     int r = lower_bound(a.begin() + j + 1, a.end() , y) - a.begin() ;

                     if(l <r){
                         ans += r- l ;
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
