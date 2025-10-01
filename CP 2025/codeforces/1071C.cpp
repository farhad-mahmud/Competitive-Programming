#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const int  MOD = 1e9 + 7;

void solve() {
    int n;
    cin >> n;
    vector<vector<int>> g(n + 1, vector<int>(n + 1));

    vector<int> p(2 * n + 1); 

    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= n; ++j){
            cin >> g[i][j];
         }
    }

 
    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= n; ++j){
            p[i + j] = g[i][j]; 
         }
    }

  

    set<int> used;

    for (int i = 2; i <= 2 * n; ++i){

             used.insert(p[i]);
    }

 
    for (int val = 1; val <= 2 * n; ++val) {
          
        if (!used.count(val)) {  

            p[1] = val;

            break;

        }

    }

    for (int i = 1; i <= 2 * n; ++i){
          cout << p[i] << " ";
    } 


         cout << endl; 
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
