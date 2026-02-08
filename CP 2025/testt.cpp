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
      string s ; cin >> s ;

      // int oddcnt = 0 ;
      // int evencnt = 0 ;
      // // we go 1 ,3 ,5, 7..
      // for(int i=0;i<n;i+=2){
      //       if(s[i] == '0'){
      //           oddcnt++ ;
      //       }
      // }

      // for(int i=1;i<n;i+=2){
      //     if(s[i] == '1'){
      //          evencnt++ ;
      //     }
      // }

     vector<bool> hash(n+2,false) ;

     for(int i = 0; i < n; i++){
         if(s[i] == '1'){
             hash[i] = true ;
         }
     }
   

     int cnt = 0 ;
     int cnt1  = 0 ;
     for(int i=0;i<n;i++){
            if(s[i] == '1'){
                 cnt1++ ;
            }
     }

     for(int i=0;i<n;i++){
         if(s[i] == '0'){
            if(i==0){
                 if(!hash[i+1]){
                  cerr << "h" << nl;
                   cnt++ ;
                   hash[i] = true ;
                   s[i] = '1' ;
                 }
            }
            else if(i==n-1){
                 if(!hash[i-1]){
                   cnt++ ;
                   hash[i] = true ;
                   s[i] = '1' ;
                 }
            }
            else{
                 if(!hash[i+1] && !hash[i-1]){
                  cerr << i << nl;
                    cnt++ ;
                    hash[i] = true ;
                    s[i] = '1' ;
                 }
            }
         }
     }

     int cnt2 = 0 ;




    // cerr << cnt << nl;

     cout << cnt + cnt1 << nl ;


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
