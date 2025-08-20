#include <bits/stdc++.h>
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
const int N = 2e5 + 9;
const int MOD = 1e9 + 7;


void solve ()
{
               
               int n , a , b ; cin >> n >> a >> b ;

               if(a>n && b > n || a == 1 && b == 1){

                     if(n & 1){

                           cout << "Alice" << nl;
                           return ;
                     }
                     else {

                            cout << "Bob" << nl ;
                            return ;
                     }


               }
               else if(n== a && a == b){

                     cout << "Alice" << nl;
                     return ;
               }


               int rem = n % a ;

               if(rem % b == 0){

                     cout << "Alice" << nl;
               }
               else {

                     cout << "Bob" <<nl ;
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
