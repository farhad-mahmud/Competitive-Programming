#include <bits/stdc++.h>

using namespace std;

#define int long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const int MOD = 1e9 + 7;
void solve ()
{
        
      int n, k;
       cin >> n >> k;
       if (n % 2 == 1 && k % 2 == 0) {
          cout << "NO\n";
           return;
       }
     int w;

    if ((n + k - 1) % 2 == 1){
     w = 1; 

    } 
    else {
        w = 2;
    }

 //   if (n - w * (k - 1) <= 0) {
     //   cout << "NO\n";
       // return;
   // }

    cout << "YES\n";

    cout << n - w * (k - 1);
    for (int i = 0; i < k - 1; ++i){
        cout << " " << w;
    }
    cout << "\n";

                             
}




int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

    int t = 1 ;
    cin >> t;
    while (t--) {


            solve() ;


    }

    return 0;
}
