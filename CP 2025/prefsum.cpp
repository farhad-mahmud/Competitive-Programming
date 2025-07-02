#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   (x.begin(),x.end()) ;
const int  MOD = 1e9 + 7;


const int N = 1e5 + 9 ; 



void solve ()
{
        
          int n ; cin >> n;
            
          vector<int > a(n) ;
          vector<int > pref_sum(n) ;

          for(int i=1 ;i<=n;i++){

                cin >> a[i] ;
          }

          int q ; cin >> q; 


         // cout << "h" << endl;

                  pref_sum[0] = 0 ;

                for(int i=1 ;i<=n;i++){ 

                   pref_sum[i] = pref_sum[i-1] + a[i] ;

                 } 
            

           // sum of a segment elements ;
          while(q--){

                  int l, r ; cin >> l >> r ;

                   int sum = 0 ;

                   sum = pref_sum[r] - pref_sum[l-1] ;


                   cout << sum << endl; 
          }

         
          // tc is now O(n+q) now , from before (n*q) ;

}




int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

        // cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
