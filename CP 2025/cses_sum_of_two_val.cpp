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

                 vector<int > a(n + 1) ;

                 for(int i= 1; i<=n ;i++){

                        cin >> a[i] ;
                 }

          
              map <int ,int > mp  ;

              for(int i=1 ;i<=n; i++) {

                    
                     if(mp.find(x-a[i]) != mp.end()){

                             cout << mp[x-a[i]] << ' ' << i << nl; 
                             return ;
                     }

                   mp[a[i]] = i ;

              }


                  cout << -1  << nl; 
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
