#include <bits/stdc++.h>
using namespace std;

#define int  long long

#define nl       "\n" 

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
// Constants
const int N = 1e5 + 9;
const int MOD = 1e9 + 7;


void print(map<int ,string> mp){

      for(auto it = mp.begin(); it!= mp.end() ;it++){

             cout << (*it).first << ' ' << (*it).second << nl; 
      }
}
void solve ()
{
      
             map<int , string > mp ;

             mp.insert({10,"Alice"});
             // insert cmp log(n) ;
             
             mp[50] = "Bob" ;
             mp[40] = "kk" ;
             mp[20] = "miles" ;
             mp[30] = "Gwen" ;
             mp[40] = "peter" ;


            print(mp) ;

           // find anything with the key !

           cout << mp[4] << nl; 
           //auto it = mp.find(3) ;

           //cout << (*it).first << ' ' << (*it).second << nl ;
           
            cout << nl; 

            auto it = mp.lower_bound(3) ;

            cout << (*it).first << ' ' << (*it).second << nl; 
          
           // first is key , second is value ;


            cout << mp[1] << nl; 


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
