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
                  int x  ; cin >> x ;

                  int ans_a = 1e13 , ans_b = 1e13 ;

                  for(int i =1 ;i*i <=x ;i++){ 
                     
                      if(x % i == 0){

                          int a = i , b = x/ i ;

                          if(__gcd(a,b) == 1){ 

                              if(max(a,b) < max(ans_a ,ans_b)){

                                   ans_a = a  ;
                                   ans_b = b ;
                              }
                          }
                      }
                        
                  }


                  cout << ans_a << ' ' << ans_b << endl; 




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
