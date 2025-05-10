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
        
                  string s , t ;

                  cin >> s;
                  cin >> t;

                  int len = t.length() ;

                  int j = 0 ;

 
                  for(int i=0 ;i<len ;i++){

                          
                          if(t[i] == s[j]){

                                 j++ ;

                          }
                          
                  }


                  cout << j+1 << endl ;

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
