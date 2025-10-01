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

                 string a ;
                 cin >>  a ;

                 reverse(a.begin(),a.end()) ;

             //  cout << "reverse"  << endl << a << endl;

                 for(int i=0;i<a.length();i++)
                 {
                     if (a[i] == 'p')
                     {
                         a[i] = 'q' ;

                         //cout << "aip" << a[i] << endl;
                     }
                    else if (a[i] == 'q')
                     {
                         a[i] =  'p' ;
                         // cout << "aiq" << a[i] << endl;
                     }
                 }

         cout << a << endl   ;

    }

    return 0;
}

