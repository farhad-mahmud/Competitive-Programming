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
        
          int n ; cin >> n ;

          vector <int > v (n) ;

          for(int i=0;i<n;i++){

                 cin >> v[i] ;
          }

          map < ll,ll > mp ;

          for(int i=0;i<n;i++) {

                    mp[v[i]]++ ;

                    if(mp[2] >= 2 && mp[0] >= 3 && mp[5] >= 1 && mp[3] >= 1 && mp[1] >= 1){

                                 cout << i+1 << endl;

                                 return ;
                    }
          }
 

                 cout << "0\n" ;
        
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
