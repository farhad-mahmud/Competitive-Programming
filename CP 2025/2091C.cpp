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

              if(n % 2 == 0){

                        cout << -1 << endl;

                        return ;
              }

              int idx = 1 ;

            for (int i = 0; i < n; i++){
          
                  int x = (i + idx++) % n;

                   if (!x)
                      cout << n << " ";
                    else

                     cout << x << " ";
                 }


               cout << "\n";
         
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
