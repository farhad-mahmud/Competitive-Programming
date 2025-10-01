#include <bits/stdc++.h>

using namespace std;

#define int long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const int  MOD = 1e9 + 7;

bool is_prime(int n) {

    if(n==1){

         return false ;
    }
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}
void solve ()
{
        
     
                 
                     int x , k ;   cin >> x >> k ;

                 
 
                 if(k==1){

                     if(is_prime(x)){

                           yes ;
                     }
                     else 
                     { 
                                  
                             no ;
                     }
                 }
                 else {

                          if(x ==1 && k == 2){

                                   yes;
                          }
                          else {

                               no ;
                          }

                 }
         

                


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
