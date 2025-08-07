#include <bits/stdc++.h>
using namespace std;

#define ll  long long

#define nl       "\n" 

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
#define dbug(x) cerr << (#x) << " is " << (x) << nl;
#define output(a) for(auto &it: a) cerr<<it<<" "; cerr<<nl;
// Constants
const int N = 1e5 + 9;
const int MOD = 1e9 + 7;

//bitwise .... 

void solve ()
{
           int k ; cin >> n ;

           vector<int > a(n) ;

           for(int i=0;i<n;i++) cin >> a[i] ;

           
           vector<int > ans ;

          int f = 0 ;

          for(int k = 30 ;k>=0 ;k--){

                if((n >> k)& 1) // if the kth bit of n is 1;
                {                
                      f = k ;  // f is the indx of most significant bit of n ;
                      break ;
                } 
          }
         
         for(int i=0;i<=f;i++){

              ans.push_back(1<< i ) ;  // adds powers of 2: 1,2,4, 8
         }

         int x = 1<< f ; // highest power of 2 <=n ;

         for(int i=f-1;i>=0;i--){

                if((n>>i) & 1){   // if the ith bit of n is 1 ;

                     x+= 1 << i ; // x + = 2^i ;

                     ans.push_back(x) ;
                }
         }

           
         reverse(ans.begin() , ans.end()) ;

         cout << ans.size() << nl ;

         for(auto i :ans ){

               cout << i << nl ;
         }

      cout << nl ;

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
