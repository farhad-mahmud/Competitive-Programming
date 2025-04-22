#include <bits/stdc++.h>

using namespace std;

#define ll  long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const ll  MOD = 1e9 + 7;


void solve() {
    int n;
    string s;
    cin >> n >> s;

    int segments = 1; 

    for (int i = 1; i < n; i++) {
        if (s[i] != s[i - 1]) {
            segments++;
        }
    }

    int transitions = segments - 1;
    int cost = n + max(transitions - 1, 0);

    cout << cost << '\n';
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
