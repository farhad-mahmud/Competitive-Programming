#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   (x.begin(),x.end()) ;
const int  MOD = 1e9 + 7;



void solve ()
{
        
                  string s ; cin >> s;


                  int s_l = s.length()  ;

                  
                  // cout << s_l << endl;

                  

                         for(int i=0;i<26 ;i++){

                                 bool got = false ;

                              for(int j=0 ;j<s_l ;j++){

                                      if('a'+i == s[j]){

                                          
                                                got = true ; 
                                      }

                              
                                }

                             //   cout << got << endl; 

                              

                               if(!got){

                                      char b = ('a' + i) ;

                                      cout << b << endl;

                                      break ;
                               }

                              
                         }
                 
         
                  
         

}




int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

        // cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
