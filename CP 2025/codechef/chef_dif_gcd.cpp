

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

bool is_prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0) return false;
    return true;
}


void solve ()
{
            int n , m ; cin >> n >> m ;

            
            int l = n , r = m ;

            int mx = 0 ;

            

            for(int i=l ;i<=m ;i++){

                 for(int j=l ;j<=m ;j+=i){

                       mx = max(mx , j) ;
                 }

                 if(__gcd(i,mx)>=n){

                      cout << i << ' ' << mx << nl; 
                      break ; 
                 }

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
