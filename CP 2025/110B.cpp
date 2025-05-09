#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)


#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   x.begin(),x.end() 
const int  MOD = 1e9 + 7;



void solve ()
{
                   int n ; cin >> n;

                   vector<string > s  ;


                   if(n <=4){


                          for(int i=0;i<n;i++){


                                  cout<< char('a' + i) ; 
                          }

                          return ;
                   }

                   else {

                           for(int i =0 ;i<n ;i++){

                                    int nxt =(i + 0) % 4 ;
                                   cout << char('a' + nxt) ;

                           }  
                   }





}


int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

         //cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
