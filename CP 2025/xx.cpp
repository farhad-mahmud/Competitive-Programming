#include <bits/stdc++.h>
using namespace std;

#define int  long long

#define nl       "\n" 

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define pii pair<int,int>
#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
#define dbug(x) cerr << (#x) << " is " << (x) << nl;
#define output(a) for(auto &it: a) cerr<<it<<" "; cerr<<nl;
// Constants
const int N = 1e5 + 9;
const int MOD = 1e9 + 7;


void solve ()
{
                    int n , h1 ; cin >>n >> h1  ;


                    int total = 0 ;



                    while(n--){

                           int l , w , h2 ; cin >> l >> w >>h2;


                           if(l > h1 && w > h1 &&  h2 > h1){


                                 cout << "impossible" << nl;

                                 return ;
                           }



                           int ans = min({l,w,h2}) ;

                            total += ans ;

                    }



                    cout << total << nl ;

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
