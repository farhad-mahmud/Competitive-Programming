#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()

const int  MOD = 1e9 + 7;


void solve ()
{
                  
    int n;

    cin >> n;
    vector<ll> A(n);
    for (int i = 0; i < n; ++i)
        cin >> A[i];

    vector<ll> dp(n + 1, INF);

    dp[1] = A[0];

    for (int i = 1; i <= n; i++) {

        for (int jump = 1; i + jump <= n; jump *= 2) {
         
            dp[i + jump] = min(dp[i + jump], dp[i] + A[i + jump - 1]);
        }
    }

    cout << dp[n] << '\n';





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
