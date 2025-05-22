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

            int n , d ; cin >> n >> d ;

              int cur = 0 ,len = 0 ;

             while(1){

   // so first assume d = 3 , then in this while loop we are just adding 33 , then 333 , then 
               // 3333 , and seeing if any number is divisible by n , if it is , we break ;
             
                 cur = (cur * 10 + d ) % n ;
                  len++ ;
                 if(cur == 0) {

                         break ;
                 }

             }

             cout << "case " << k << ": " << len <<  endl ;
}


int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

         cin >> t ;

         int k = 0 ;

         while(t--){

            k++ ;

            solve(k) ;
        
        }


    return 0;
}
