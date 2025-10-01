#include <bits/stdc++.h>
#include<cmath> 
using namespace std;

#define ll  long long

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
           
             ll l , r , g ; cin >> l >> r >> g  ;

             if(g > r ){

                  cout << 0 << nl ;
                  return ;
             }


             ll x = (l + g - 1)/ g ; // num of multiples of g from 1 to l ...
             ll y = (r/g) ;          // num of multiples of g from 1 to r ...

             //cerr << x << ' ' << y << nl; 

             ll cnt = y - x + 1;

             if(cnt >=2){

                 cout << cnt << nl;
             }
             else if(cnt == 1){

                   if(x==1){
                     cout << 1 << nl;
                   }
                   else {

                     cout << 0 << nl;
                   }
             }
             else {

                  cout << 0 << nl ;
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
