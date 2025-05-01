#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "yes\n";
#define no cout << "no\n";
#define all(x)   (x.begin(),x.end()) ;
const int  MOD = 1e9 + 7;
void solve() {

    FAST_IO;
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];  
    }

    sort(b.begin(), b.end());

  
    if (a == b) {
        yes ;
        cout << 1 << " " << 1 << endl; 
        return;
    }

  
    int l = 0, r = n - 1;

    while (l < n && a[l] == b[l]){
     l++;
    }
    while (r >= 0 && a[r] == b[r]) {
        r--;
    }

    
    reverse(a.begin() + l, a.begin() + r + 1);

    if (a == b) {
        
              yes ;

              cout << l+1 << " " << r+1 << endl; 
    } else {

          no ; 
    }
}




int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

        // cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
