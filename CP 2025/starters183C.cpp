#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const int  MOD = 1e9 + 7;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;

  
    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());

    int mi = a.front();
    int ma = a.back();

    int ans = ma - mi - 1;

    cout << max(0LL, ans) << '\n';


    
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
