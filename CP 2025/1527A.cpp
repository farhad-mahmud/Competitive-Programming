#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const ll MOD = 1e9 + 7;
void solve ()
{
        
           int n ;  cin >> n ;
            
         
            int power = 1 ;
            while(power * 2 <= n){

                      power *= 2 ;
            }
       
           
         cout << (power - 1) << endl;
        
}




int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

    int  t = 1 ;
    cin >> t;
    while (t--) {


            solve() ;


    }

    return 0;
}
