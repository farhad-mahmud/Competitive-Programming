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
         int n ; cin >> n ;
         string x ; cin >> x ;

         string t = "" ;

         for(int i=0;i<n;i++){
                int j = i+1 ;
                if( j % 2 == 1){
                    t += 'a' ;
                }
                else {
                    t += 'b' ;
                }
         }

         // cout << t << nl;

         if(n % 2 == 1){
              if(x[0] == 'b'){
                  no ;
                  return ;
              }
         }

         bool f = true ;
       for(int i=n%2;i<n;i+=2){
           cerr << i << nl ;
            if(x[i] == x[i+1]){
                if(x[i] != '?' && x[i+1] != '?'){
                        f = false ;
                        break ;
                }   
            }
       }

       if(f){
           yes;
       }
       else {
           no ;
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
