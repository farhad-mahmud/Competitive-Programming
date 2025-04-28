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
        
                    int n ; cin >> n ; 

                    int rem = 0 ;
                    vector <int > v ;

                    while(n>1){

                          rem = n % 10  ;

                          v.push_back(rem) ;

                          n /= 10 ;
                    }

                     
                     int s = 0 ;

                    for(int i= 0;i<v.size();i++){

                          
                               if(v[i] % 2 == 0){

                                       
                                      swap(v[0],v[i]) ;

                                      cout << "s : "<<  s << " " << v[0] << endl; 

                               }

                    }


                    reverse(v.begin(),v.end()) ;


                   for(auto i : v){

                              cout << i << " " ;
                   }

                   cout << endl; 
}




int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

       //  cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
