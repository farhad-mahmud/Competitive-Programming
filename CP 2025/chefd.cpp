//---  Bismillahir Rahmanir Rahim ---//


#include <bits/stdc++.h>
using namespace std;

#define int  long long

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
         int n ,s ; cin >> n >> s ;

         
         if(s % n == 0){

              int fact = s/ n; 

              int m = 0 ;
              for(int i=6;i>=1;i--){
                  if(i != fact){
                       m = i ;
                       break ;
                  }
              } 

              cout << m*n << nl ;
         }
         else {

              // cout << "here" << nl ;
               //int need = s- n ;
              int fact = (s/ n)+1 ;

              int barti = s % n ;

             // cerr << barti << nl ;
              int m = 0 ;
              for(int i=6;i>=1;i--){
                  if(i != fact){
                       m = i ;
                       break ;
                  }
              }  
              int lastone = fact+ barti ;

               int m2 = 0 ;
               for(int i=6;i>=1;i--){
                  if(i != lastone){
                       m2 = i ;
                       break ;
                  }
              }  

             // cerr << m << nl ;
              int ans = m*(n-1)+ m2; 
              
              cout << ans << nl; 

         }



}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;

   cin >> t ;

   while (t--) {

      solve() ;

   }


   return 0;
}
