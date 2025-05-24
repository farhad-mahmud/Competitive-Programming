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

void solve (int k )
{
             int w ; cin >> w  ; // n is odd , m is even ;
                                 // even is minimised ;
                   
             vector<int> div ;
          
            
            cout << "Case " << k  << ": " ; 
            if(w % 2 == 1){             // if w is odd ;
        

                cout << "Impossible" << endl;
                 
                 return ;
            }
            else {

                 int m = 1 ;

                  while(w % 2 == 0){ // looping throw 2's in w ;
                    
                       m *= 2 ;

                       w /= 2 ;
                  }

                  int n = w  ;     // the leftover of w is in n , cause the leftover is odd ;

                  cout << n << ' ' << m << endl ;
            }



         
}


int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

         cin >> t ;
         
         int k = 0;
         while(t--){
               
               k++ ;

            solve(k) ;
        
        }


    return 0;
}
