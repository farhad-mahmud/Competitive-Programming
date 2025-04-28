#include <bits/stdc++.h>

using namespace std;

#define ll  long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   (x.begin(),x.end()) ;
const int  MOD = 1e9 + 7;
void solve() {
    

     string s; cin >> s; 
     

    int la_digit = s.back() - '0';
    int b_ind = -1; 

    for (int i = 0; i < s.size() - 1; i++) {
        if ((s[i] - '0') % 2 == 0) { 
            if (s[i] < s.back()) {
               
                swap(s[i], s.back());
                cout << s << endl;
                return;
            }
            b_ind = i;
        }
    }

    if (b_ind != -1) {
        swap(s[b_ind], s.back());
        cout << s << endl;
    } else {
        cout << -1 << endl;
    }
}




int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

       //  cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
