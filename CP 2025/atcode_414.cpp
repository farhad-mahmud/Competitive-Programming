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
                    int n , l , r ; cin >> n >> l >> r ;

                    vector<int > x(n+1);
                    vector<int > y(n+1);

                    for(int i=1;i<=n;i++){
                         cin >> x[i] >> y[i] ;
                    }

                    int cnt = 0 ;

                    for(int i=1;i<=n;i++){

                          if(x[i] <= l && y[i] >= r){

                                cnt++ ;
                          }
                    }


                    cout << cnt << nl;
                        
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
