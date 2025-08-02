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

               string s ; cin >> s ;

               //int cnt0 = 0 ;

              
               int cnt1 = count(all(s) ,'1') ;

               int cnt0 = count(all(s), '0') ; 

            
               bool f = true ;

               vector<bool> taken(n,false) ;

               for(int i=0 ;i<n;i++){
 
                     
                     if(s[i] == '1') continue ;

                     if(i > 0 && s[i-1] == '1' && taken[i-1] == false){

                          taken[i-1] = true ;
                     }
                     else if(i <n-1 && s[i+1] =='1' && taken[i+1] == false){

                          taken[i+1] = true ;
                     }
                     else {

                          f = false ;
                          break ;
                     }


               }

              
              if(f){

                 yes ;
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

         while(t--){

            solve() ;
        
        }


    return 0;
}
