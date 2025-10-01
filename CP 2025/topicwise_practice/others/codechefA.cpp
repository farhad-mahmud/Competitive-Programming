#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const ll MOD = 1e9 + 7;
void solve (int x ,int y)
{
               
            int max_score = x + y*10 ;

            if(max_score >= 100)
            {
                cout << "YES" << endl; 
            }
            else
            {
               cout << "NO" << endl; 
            }

}




int main() {
    FAST_IO;

    int t;
    cin >> t;
    while (t--) {

             int x ,y ;
             cin >> x >> y ;
            solve(x,y) ;


    }

    return 0;
}
