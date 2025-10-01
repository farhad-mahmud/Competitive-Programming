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
const int N = 1e6 + 9;
const int MOD = 1e9 + 7;


bool is_prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i<= sqrt(n); i++)  // till sqrt of n ;
        if (n % i == 0) return false;
    return true;
}

void solve ()
{

               int m , n ; cin >> m >> n ;

               for(int i= m ;i<=n;i++){

                      if(i==1) continue ;

                      if(is_prime(i)){

                           cout << i << nl ;
                      }
               }


                cout << nl ;

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
