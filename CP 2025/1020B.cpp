#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const int  MOD = 1e9 + 7;

void solve() {
    int n, x;
    cin >> n >> x;

    vector<int> p;

 
    for (int i = x - 1; i >= 0; i--) {
        p.push_back(i);

        
    }

    

    for (int i = n - 1; i > x; i--) {
        p.push_back(i);
    }

 
    if (x < n) {
        p.push_back(x);
    }

 
    for (int i = 0; i < n; i++) {
        cout << p[i] << " ";
    }

    cout << '\n';
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
