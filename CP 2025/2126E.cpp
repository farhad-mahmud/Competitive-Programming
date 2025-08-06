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
// Constants
const int N = 1e5 + 9;
const int MOD = 1e9 + 7;


void solve ()
{
          int n ; cin >> n ;

          vector<int > p(n), s(n) ;

          for(int i=0;i<n;i++) cin >> p[i] ;

          for(int i=0;i<n;i++) cin >> s[i] ;
           
          vector<int > pref(n) , suf(n) ;



          if(n==1){

               if(p[0] != s[0]){
                    no ;
                    return ;
               }
               else {
                   yes;
                   return ;
               }
          }



          pref[0] = p[0] ;

          for(int i=1;i<n;i++){

               pref[i] = __gcd(pref[i-1] , p[i]) ;
          }

          suf[n-1] = s[n-1] ;

          for(int i=n-2;i>=0 ;i--){
               suf[i] = __gcd(suf[i+1] , s[i]) ;
          }


          vector<int > v ; 
          
          for(int i=0 ;i<n;i++){
               int gc = 0 ;

               if(i==0) gc =s[i+1] ;
               else if(i==n-1) gc = p[i-1] ;
               else gc = __gcd(p[i-1],s[i+1]) ;

               v.push_back(gc) ;
          }
             

            output(v) ;

          

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
