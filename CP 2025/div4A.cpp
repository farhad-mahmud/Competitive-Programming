#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const ll MOD = 1e9 + 7;

int main() {
    FAST_IO;

    int t;
    cin >> t;
    while (t--) {
               string w ;
               cin >> w ;

               int l = w.length() ;

               if(l>=2)
               {
                   w.erase(l-2,2) ;
               }
               else{
                 cout << "i" <<endl ;
               }

               cout << w << "i" << endl;


    }

    return 0;
}
