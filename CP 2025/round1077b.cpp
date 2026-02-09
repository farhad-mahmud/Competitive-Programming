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

      // for all 0..
      int cntzero = count(all(s),'0');
      int cntone  = count(all(s) , '1');

      if(cntzero == n){

           if(n % 3 == 0){
                cout << n/3 << nl;
           }
           else {
                cout << (n/3)+1 << nl;
           }

           return ;

      }

      int cnt = 0 ;
      int ok = 1 ;

      //first 00, and last 00

      int extra = 0 ;
      // if(s[0]== '0' && s[1] == '0' && s[2] == '1' && s[n-3]== '1' && s[n-2]== '0' && s[n-1] == '0'){
      //        extra+=2 ;
      // }
      // else if(s[0]== '0' && s[1] == '0' && s[2] == '1' || s[n-3]== '1' && s[n-2]== '0' && s[n-1] == '0'){
      //      extra++ ;
      // }
      for(int i=0;i<n;i++){

            if(s[i] == '1'){
                 ok= 0 ;
            }
            else {
                 ok++ ;
            }

            if(ok==3){
                 ok = 0 ;
                 cnt++ ;
            }
      }

      cerr << ok << nl;
      if(ok == 2){
           extra++ ;
      }

      cout << cnt + cntone+ extra << nl;

      
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
