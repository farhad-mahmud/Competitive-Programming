#include <bits/stdc++.h>
using namespace std;

#define ll  long long

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
                 
                   int x , n ; cin >> x >> n ;

                   vector<int > d(n) ;
                   multiset<int > set ; 


                   for(int i=0;i<n;i++){
                      cin >> d[i] ;
                      set.insert(d[i]) ;
                   } 

                   int ans = 0 ;

                   while(set.size() > 1){

                        auto it = *set.begin() ;

                        int x = it  ;
                 
                        set.erase(set.begin()) ;
                        
                        auto it2 = *set.begin() ;
                        int y = it2 ;
                        set.erase(set.begin()) ;

                        ans += x+ y ;
                        set.insert(x+y) ;

                   }

                   cout << ans << nl; 
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
