#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)
#define nl       "\n" 

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()

const int  MOD = 1e9 + 7;


void solve ()
{
   
    int x;
    cin >> x;

    vector<int> a = {0, 0, 0};

    int ans = 0;

    while (a[0] != x || a[1] != x || a[2] != x) {

        sort(a.begin(), a.end());

        int t_val = min(x, 2 * a[1] + 1);

        a[0] = t_val;

        ans++;
    }

    cout << ans << nl; 

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
