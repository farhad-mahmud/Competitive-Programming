//---  Bismillahir Rahmanir Rahim ---//


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

// constrains

const int N = 1e5 + 9;
const int MOD = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;

    vector<int > f(n+1);
    for(int i=1;i<=n;i++){
        cin >> f[i];
    }

    if(n == 1){
        cout << 0 << nl;
        return;
    }

    int sum = (f[1] + f[n])/(n-1);

    vector<int> v(n+1);
    for(int i=1;i<n;i++){
        v[i] = f[i+1] - f[i];
    }

    vector<int> pref(n+1);
    for(int i=1;i<n;i++){
        pref[i] = (v[i] + sum) / 2;
    }

    vector<int> a(n+1);
    a[1] = pref[1];

    pref[n] = sum ;

    for(int i=2;i<=n;i++){
        a[i] = pref[i] - pref[i-1];
    }

    for(int i=1;i<=n;i++){
        cout << a[i] << ' ' ;
    }

    cout << nl;
}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;

   cin  >> t ;

   while (t--) {

      solve() ;

   }


   return 0;
}
