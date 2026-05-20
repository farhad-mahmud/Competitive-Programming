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

const int N = 100 ;
const int MOD = 1e9 + 7;


void solve ()
{  
       string str ; 

       getline(cin , str) ;
       string s ; 


       for(int i=0;i<str.length();i++){
            if(str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z' || str[i] >= '0' && str[i] <= '9'){
                     if(str[i] >= 'A' && str[i] <='Z'){
                           char up = str[i] ;
                           char lw = tolower(up) ;

                           s+= lw ;

                     }
                     else{
                     s += str[i] ;
                    }
            }
       }


       cerr << s << nl; 
       int len = s.length() ;

       int i = 0 , j = len -1 ;

       bool f = false ;
       while(i<=j){
           if(s[i] != s[j]){

               f = true ;
               break ;
           }
           else{
               i++ ;
               j-- ;
           }
       }


       if(f){
            cout << "false" << nl;
        }
        else {
           cout << "true" << nl;
        }


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
