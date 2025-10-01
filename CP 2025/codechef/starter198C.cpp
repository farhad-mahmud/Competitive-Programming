#include <bits/stdc++.h>
using namespace std;

#define int  long long

#define nl       "\n" 

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
#define dbug(x) cerr << (#x) << " is " << (x) << nl;
#define output(a) for(auto &it: a) cerr<<it<<" "; cerr<<nl;
// Constants
const int N = 1e5 + 9;
const int MOD = 1e9 + 7;


void solve ()
{
            int a1, b1 , a2 , b2 ; cin >> a1 >> b1 >> a2 >> b2 ;

            
            int t1 = 5*a1 + b1 ;

            int t2 = 5*a2 + b2 ;

            if(t1 >= t2 && (t1 - t2) % 6 == 0){

                 yes;
            }
            else {

                 no ;
            }

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
