#include<bits/stdc++.h>

using namespace std;

#define int long long 

int32_t main(){

             

            int t ; cin >>t ;

            while(t--){

      int n;
    cin >> n;

    vector<vector<int>> g(n + 1, vector<int>(n + 1)); 
 
    vector<int> p(2 * n + 1); 
 
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin >> g[i][j];
         }
    }
 
 
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            p[i + j] = g[i][j]; 
         }
    }
 
  
 
    set<int> used;
 
    for (int i = 2; i <= 2 * n; ++i){
 
             used.insert(p[i]);
    }
 
 
    for (int i = 1; i <= 2 * n; i++) {
 
        if (!used.count(i)) {  
 
            p[1] = i;
            break;
 
        }
    }
 
    for (int i = 1; i <= 2 * n; i++){
          cout << p[i] << " ";
    } 
 
 
         cout << endl; 
                       


	       
            }


            return 0 ;

}