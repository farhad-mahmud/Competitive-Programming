#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)


#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
#define vi       vector<int > 
#define  forr    for(auto &i : x) 
const int  MOD = 1e9 + 7;



void solve ()
{
         
               int n ;cin >> n;

               vector<int > a(n+1) ;

               for(int i= 1; i<=n ;i++){ 
                  cin >>a[i] ;
               }
               vector<int > suffix_sum(n+2) ;  
               suffix_sum[n+1] = 0 ;    // cause 1 based index ; 

               for(int i = n;i>=1;i--){      // precalculated suffix_sum
                   
                    suffix_sum[i] = suffix_sum[i+1] + a[i] ;
               }
               
               int ans = 0 ;
               for(int i=1 ;i<=n;i++){
                      int sum = 0;
                     sum = a[i]* suffix_sum[i+1] ;
                     ans += sum ;
               }

              cout << ans << endl; 

}


 // remember this 

// optimise loop uses via implementing number theory / algorithm
// optimise array elements calculation via number theory / algorithm

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
