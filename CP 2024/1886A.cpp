#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const ll MOD = 1e9 + 7;
void solve (int x1,int x2,int x3 )
{
         
             int mi = min(x1,min(x2,x3)) ;
             int ma = max(x1,max(x2,x3)) ;
             int mid = (x1+x2+x3) - (mi + ma) ;

            int ans = (x1- mid) ;

            cout << ans << endl;

}




int main() {
    FAST_IO;

    int t;
    cin >> t;
    while (t--) {

            int x1,x2,x3 ;
            cin >> x1 >> x2 >> x3 ;
            solve(x1,x2,x3) ;


    }

    return 0;
}
