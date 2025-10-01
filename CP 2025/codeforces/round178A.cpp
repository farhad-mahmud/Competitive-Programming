#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   (x.begin(),x.end()) ;
const int  MOD = 1e9 + 7;
void solve ()
{
        
                       int a , b , c ; cin >> a >> b >> c ;

                       int sum = a+b+c ;

                       if(sum % 3 != 0){


                               no;
                               return ;
                       }
                       else {


                                 int f = sum / 3 ;

                                 int extra = c - f;

                                 if(f >= b && f >= a){
  
                                          yes;
                                 }
                                 else {

                                        no ;
                                 }

                           
                               
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
