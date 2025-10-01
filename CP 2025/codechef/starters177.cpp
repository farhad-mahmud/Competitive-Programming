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
               
              int x, y , k ; cin >> x >> y >> k;

               
               
               int ini_dif = abs(x-y) ;

               int need_dif = abs(ini_dif - k) ;


             //  cout << need_dif << endl; 
              
               int ans = 0; 
               
               if( need_dif % 2 == 1){

                     cout << -1 << endl; 
               }
               else {

                      cout << need_dif/2 << endl; 
               }


}


int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

         cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
