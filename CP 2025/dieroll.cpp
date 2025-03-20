#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const ll MOD = 1e9 + 7;
void solve ()
{
        
        int y, w ;
    cin >> y >> w;
    
    int max_roll = max(y,w); 
    int outcome = 6 - max_roll + 1; 
    
   
    int numerator[] = {0, 1, 1, 1, 2, 1, 1};
    int denominator[] = {1, 6, 3, 2, 3, 6, 1};
    
    cout << numerator[outcome] << "/" << denominator[outcome] << endl;
    
        
}




int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

    ll t = 1 ;
  //  cin >> t;
    while (t--) {


            solve() ;


    }

    return 0;
}
