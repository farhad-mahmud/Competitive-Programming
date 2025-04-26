#include <bits/stdc++.h>

using namespace std;

#define ll  long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const int  MOD = 1e9 + 7;
void solve() {
    string s;
    cin >> s;

    for (int i = 0; i < 10; i++) {
        int need = 9 - i;

        for (int j = i + 1; j < 10; j++) {
            if (s[j] < s[i] && (s[j] - '0') >= need) { // by s[j] - '0' , we convert string to int 
                swap(s[i], s[j]);                      // cause need is a int
            }
        }
    }

    cout << s << "\n";
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
