//---  Bismillahir Rahmanir Rahim ---//


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

// constrains

const int N = 1e5 + 9;
const int MOD = 1e9 + 7;


void solve ()
{  
            
         int n ; cin >> n ;
         int total = 1 ;

         for(int i=2;i*i <=n;i++){

              if(n % i == 0){
                   int exp = 0 ;
                   while(n % i == 0){
                        exp++ ;
                        n=n/i ;
                   }

                   ll sum =0 , pw = 1 ;

                   for(int k=1;k<=exp;k++){
                        pw *= i ;
                        sum += pw ;
                   }
                   total *= sum ;
              }
              
         }

         if(n > 1){
               total *= (1 + n) ;
         }

         cout<< total << nl; 
}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;

   // cin >> t ;

   while (t--) {

      solve() ;

   }


   return 0;
}
