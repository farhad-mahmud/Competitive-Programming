#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const ll MOD = 1e9 + 7;
int ceildiv(ll a ,ll b ){
     
             return (a+ b -1) / b ;
}
void solve ()
{
            ll n , k ;  cin >>  n >> k ;

              ll steps = 0 ;
              ll E = k -1 ;

             if(n % k ==0){
           
                steps = ceildiv(n,E) ;

             }
             else {

                     steps = 1 +  ceildiv(n-k,E) ;
             }
          
         cout << steps << endl;
}




int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

    ll t = 1 ;
    cin >> t;
    while (t--) {


            solve() ;


    }

    return 0;
}
