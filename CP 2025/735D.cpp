#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()

const int  MOD = 1e9 + 7;

///

bool is_prime(int n){

   if(n==1) return false ;

      for(int i =2 ;1LL *i*i <=n;i++){  
             
              if(n % i ==0){

                  return false ;
              }
     }

    return true ;

}
void solve ()

                  int n ; cin >> n ;


                  if(is_prime(n)){

                       cout << 1 << endl; 
                  }

                  else if(n % 2 ==0){
                            

                        cout << 2 << endl;

                  }
                  else {

                       if(is_prime(n-2)){

                          cout << 2 << endl ;
                       }
                       else {

                         cout << 3 << endl; 

                      }
                  }

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
