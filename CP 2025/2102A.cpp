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
              int n , m , p , q  ;

              cin >> n >> m >> p >> q ;

               
               bool f ;

               // or if  m / q == n / p  is true , then ans yes ;
               
              if(n % p == 0){

                    if(n*q == m*p){

                          f = true ;
                    }
                    else {

                         f = false ;
                    }

              }
              else {

                    f = true ;
              }

                   
                   if(f){

                        yes ;
                   }
                   else {

                      no ;
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
