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
                int n , x ; cin >> n >> x ;

                vector<int > p(n)  ;


                for(int i=0 ;i<n;i++){

                      cin >> p[i] ;
                }


                sort(p.begin() , p.end()) ;


               int l = 0 , r = n -1 ;

               int ans =0 ;

               while(l <= r){

                     if(p[l] + p[r] <= x){

                           l++ ;
                     }

                     r-- ;

                     ans++ ;


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
