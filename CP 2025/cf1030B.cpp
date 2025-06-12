#include <bits/stdc++.h>
using namespace std;

#define int  long long

#define nl       "\n" 

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
// Constants
const int N = 1e5 + 9;
const int MOD = 1e9 + 7;

void solve ()
{ 

            int n ; cin >> n ;
        
            vector<tuple<int, int, int>> tp;

   for (int i = 2; i <= n; i++) {

    if (i == 2) tp.push_back(make_tuple(i, 1, n));
    else if (i % 2 == 1) {
        tp.push_back(make_tuple(i, 1, i));
        tp.push_back(make_tuple(i, 2, n));
    } else {
        tp.push_back(make_tuple(i, n - 1, n));
        tp.push_back(make_tuple(i, 1, 2));
    }
}

    cout << tp.size() << nl;
    for (size_t j = 0; j < tp.size(); ++j) {
        int i, l, r;
        tie(i, l, r) = tp[j];
        cout << i << " " << l << " " << r << nl;
    }

         
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
