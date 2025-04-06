#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const ll MOD = 1e9 + 7;
auto st = clock() ;
void solve ()
{
        
                      int n ; cin >> n ;

                      if(n % 2== 0){

                           cout << -1 << endl; 

                           return ;
                      }

 
                       cout << n ;

                       for(int i=1 ;i < n ;i++){


                                 cout << " " << i ;
                       }

                       cout << '\n' ;


                       


}




int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);


    int t = 1 ;
    cin >> t;
    while (t--) {


            solve() ;


    }

    cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC <<  endl; 

    return 0;
}
