#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const ll MOD = 1e9 + 7;

void solve ()
{
            ll n , k ;  cin >>  n >> k ;

            int h_even = k-1 ;
            int cnt = 0;
            int rem = 0 ;
             if(n % 2 ==1){

                  n -= k ;
                  
                  if(n % h_even ==0){
                      
                      cnt = (n/h_even) + 1 ; 
                  }
                  else 
                  {
                        rem = (n % h_even) ;
                        cnt = (n / h_even) + 2 ;
                  }
             }
             else {

                   if(n % h_even ==0){

                        cnt = (n/h_even) ;
                   }
                   else {

                         rem = (n % h_even) ;
                         cnt = (n / h_even) + 1 ;
                   }
             }

            
              cout << cnt << endl; 
}




int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

    ll t = 1 ;
    cin >> t;
    while (t--) {


            solve() ;


    }

    return 0;
}
