#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const ll MOD = 1e9 + 7;
void solve ()
{
        
         ll n ,k ;   cin >> n >> k ;

          ll steps = 0 ;

          while(n>0){

                   if(n % 2 ==0){

                          n-= k;
                   }
                   else {
                        if(k>=3){
                              n-= k-1 ;
                        }
                        else {
                             n-= 2 ;
                        }
                   }

                   cout << "n " << n << endl;

                   steps++ ;
          }

          cout << steps << endl;
                   
}




int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

    int t = 1 ;
    cin >> t;
    while (t--) {


            solve() ;


    }

    return 0;
}
