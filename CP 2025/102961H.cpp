#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

/*
ll flipping_bits (ll x)
{
    for(ll i=0; i<32; i++)
    {
        x ^= ( 1LL << i );
    }
    return x;
}
*/

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   (x.begin(),x.end()) ;
const int  MOD = 1e9 + 7;

solve ()
{
        
          int n ; cin >> n;
           
           vector <int > a(n) ;    
               
           for(int i=0;i<n;i++){

                   cin >> a[i] ;
           }

           int max_sub_sum = -1e18 ;

           int  max_sum_sum_ending_at_i = -1e18;

           int cnt = 0 ;


           for(int l = 0 ;l<n;l++){

                   
            max_sum_sum_ending_at_i = max(a[l],a[l] + max_sum_sum_ending_at_i);

            max_sub_sum = max(max_sub_sum, max_sum_sum_ending_at_i) ;

          

           }

             cout<< max_sub_sum << endl;
                      
                    
}




int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

      //   cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
