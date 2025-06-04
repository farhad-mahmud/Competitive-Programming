#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)
#define nl       "\n" 

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()

const int  MOD = 1e9 + 7;


void solve ()
{
                int n ,s ; cin >> n >> s;


                vector<int > a(n) ;

               

                for(int i=0;i<n;i++){
                   cin >> a[i] ;
                }

                for(int mask = 0 ;mask <(1<<n) ;mask++){   // loop through every mask 
                       
                        int sum = 0 ; 
                      for(int i=0;i<n;i++){

                         if((mask >> i) & 1) {   // if ith bit is on in mask ; 

                              cout << a[i] << ' ' ; 

                              sum += a[i] ;
                         }
                      }
 
                      if(sum == s){

                            yes ;
                            return ;
                      }

                      cout << '\n' ; 
                }

              
              no  ;
}

// O(n * 2^n) ; tc ;
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
