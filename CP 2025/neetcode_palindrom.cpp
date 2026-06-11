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

const int N = 1e6 + 5 ;

const int MOD = 1e9 + 7;

void solve ()
{  
         string s ; cin >> s ;

         int l = s.length();

         string t = "" ;

         //bool f = false ;

         vector < string > p ;

         for(int i=0;i<l;i++){
              
              t = s[i] ;
             
             for(int j = i+1;j<l;j++){
                  t += s[j] ;
                  string rev = t ;
                  reverse(all(rev)) ;

                  if(t == rev){ // palindrom..
                        p.push_back(t) ;
                  }

              }
         }


         sort(all(p)) ;

         string ans  ;
         int mx = 0 ;
         for(auto ss : p){
               
               if(ss.size() > mx){
                    mx = ss.size();
                    ans = ss ;
               }
         }  

         cout << ans << nl; 


}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;

   //cin >> t ;

   while (t--) {

      solve() ;

   }


   return 0;
}
