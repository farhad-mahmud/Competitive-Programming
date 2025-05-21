#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
#define vi       vector<int > 
#define  forr    for(auto &i : x) 
const int  MOD = 1e9 + 7;


void solve ()
{
                      string s ; cin >> s;

                      int len = s.length() ;
                      
                     // cout << len << endl; 


                      for(int i=0;i<len;i++){

                         if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] =='u'){

                                          s[i] = s[i] + 1 ;
                         }

                         else if(s[i] == 'z'){

                                         
                                          s[i] = 'a' + 1 ;
                         }
                         else if (s[i] == 'y'){


                                          s[i] = 'a' ;
                         }
                         else{

                                          s[i] = s[i] + 2 ;
                         }

                      }
            

                   cout << s << endl; 

}              



int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

         //cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
