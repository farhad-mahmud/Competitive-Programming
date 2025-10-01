#include <bits/stdc++.h>

using namespace std;

#define ll  long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
#define vi       vector<int > 
#define  forr    for(auto &i : x) 
const int  MOD = 1e9 + 7;

// modular arithmetic ;

void solve (int k) 
{
            string a ; int b ; cin >> a >> b ;
           
            if(a[0] == '-'){

                  a.erase(a.begin()) ;
            }

            b= abs(b) ;

            int ans = 0 ;

            for(auto c : a){ 
                 
                 int d= c - '0' ; // getting digits  ;

                 ans = (1LL * ans * 10 + d % b ) % b;
            }

            cout << "Case " << k << ": " ;

            if(ans == 0){ 
                  
                  cout << "divisible" << endl; 
              }
              else {

                  cout << "not divisible" << endl;
              }



             
} 


int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

         cin >> t ;
          
          int k  = 0 ;
         while(t--){

             k++ ;

            solve(k) ;
        
        }


    return 0;
}
