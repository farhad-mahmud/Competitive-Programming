#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   (x.begin(),x.end()) ;
const int  MOD = 1e9 + 7;
void solve ()
{
        
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i){
            cin >> a[i];
         }

        vector<int> v = a;

      sort(v.rbegin(), v.rend());

          vector<int> idx;
    vector<bool> used(n, false);  

    for (int j = 0; j < n; ++j) {
        for (int k = 0; k < n; ++k) {
            if (!used[k] && v[j] == a[k]) {
                idx.push_back(k+1);
                used[k] = true;
                break; 
            }
        }
    }

    
    for (int ind : idx) {
        cout << ind << " ";
    }
    cout << endl;

    int cnt = 0 ;

     for(int i=0;i<n;i++){


                  for(int j=i+1;j<n;j++){

                          if(abs(idx[i] - idx[j]) == 1){

                                      cnt++ ;

                                  
                                   cout << "idx :" << idx[i] <<" " "idx :" << idx[j] << endl;
                          }

                  }

                 
     }
              
               
                
             cout << cnt << endl;

               

 

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
