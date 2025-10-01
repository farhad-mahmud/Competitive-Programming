#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)


#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   x.begin(),x.end() 
const int  MOD = 1e9 + 7;

void solve ()
{
        

                 string  s ;  cin >> s;

                map< char,int> mp ;

                string c = s ;

                reverse(c.begin(),c.end()) ;

                if(s== c){

                     cout << "First" << endl;

                     return ;
                }

 
                for(int i=0;i<s.length();i++){

                       mp[s[i]]++ ;
                }

                
                int ch = 0 ;
 
              for (auto it : mp) {
             if (it.second % 2 == 0) {

               ch += it.second;
               
             }
          }

               for (auto it : mp) {
              if (it.second % 2 == 1) {

                    ch += it.second;
                    break;

                   }
              }

               int ans = s.length() - ch ; 

               if(ans % 2 == 0){

                     cout << "First" << endl;
               }

               else {

                      cout << "Second" << endl; 
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
