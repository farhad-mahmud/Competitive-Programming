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
        int n, m;
        cin >> n >> m;

        vector<int> a(n);
        vector<int> b(m);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }

        bool sorted = true;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] > a[i + 1]) {
                sorted = false;
                break;
            }
        }

        if (sorted) {
            yes;
            continue;
        }

        for (int i = 0; i < n - 1; i++) {

             if(a[i] > a[i+1])
             {
                 if(a[i]>=b[0])
                 {
                     a[i] = b[0] - a[i] ;
                 }
                 else{
                    a[i+1] = b[0] - a[i+1] ;
                 }
             }

        }




        sorted = true;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] > a[i + 1]) {
                sorted = false;
                break;
            }
        }

        if (sorted) {
            yes;
        } else {
            no;
        }
    }

    return 0;
}
