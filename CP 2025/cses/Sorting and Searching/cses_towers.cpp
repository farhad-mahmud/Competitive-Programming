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

                    vector<int > k(n+1) ;

                    for(int i=1 ;i<=n;i++){

                            cin >> k[i] ;
                    }
           
                    
                   multiset<int > tower_top ;
                   int ans = 0 ;


                   for(int i= 1;i<=n;i++){

                        auto it = tower_top.upper_bound(k[i]) ;

                        if(it != tower_top.end()){

                              tower_top.erase(it) ;
                              tower_top.insert(k[i]) ;
                        }
                        else {

                              tower_top.insert(k[i]) ;
                        }
                   }


                   cout << tower_top.size() << nl; 
                    

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
