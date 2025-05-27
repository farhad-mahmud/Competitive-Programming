#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()

const int  MOD = 1e9 + 7;


void solve ()
{
                   string s ; cin >> s; 
                    
                   int len = s.size() ;

                   for(int i=1 ;i<len;i++){

                         if(s[i] == s[i-1]){

                               char c = 'a';
                         

                         while(c == s[i-1] or (i +1 <len and c== s[i+1])){

                             ++c ;
                         }

                         s[i] = c ;
                     }
                   }

                   cout << s << endl; 

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
