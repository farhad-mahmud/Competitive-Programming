#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define  all(x)  x.begin(),x.end() ;
const ll MOD = 1e9 + 7;

void solve ()
{
        
                     int n  ; cin >> n ;

                     vector <int > v(n) ;

                     for(int i=0;i<n;i++){

                             cin >> v[i] ;
                     }

                   
                    sort(v.begin(),v.end()) ;

       
                    cout << v[n-1] - v[0] << endl; 
}




int32_t main() {
  FAST_IO

    int  t = 1 ;
    cin >> t;
    while (t--) {


            solve() ;


    }

    return 0;
}
  