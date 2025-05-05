#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)


#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   (x.begin(),x.end()) ;
const int  MOD = 1e9 + 7;



void solve ()
{
        

                int n ; cin >> n ;

                vector <int > a(n+1) , prefix(n+1) ;

                for(int i=0;i<n;i++){


                       prefix[i] = prefix[i-1] + a[i] ;
                }


                int min_pref = 0 ;

                int max_sum = -1e18 ;


                for(int i =1 ;i<=n ;i++){

                max_sum = max(max_sum , prefix[i] - min_pref);
              
              //max_sum gives the best subarray ending at or before i 
                // by substracting off the worst prefix ;
                min_pref = min(min_pref, prefix[i]) ; // the smallest prefix sum seen
                                                              // before i ;

                }

                cout << max_sum << endl;
 



}




int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

         cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
