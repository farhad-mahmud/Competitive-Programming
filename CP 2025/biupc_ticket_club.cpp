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
                int n , m ;  cin >> n >> m ;

                map <int , int > t ;


               for(int i=0;i<n;i++){

                     int s; cin >> s; 

                     t[s]++ ;  
               }

               vector< int > v(m) ;

               for(auto &i : v) {

                     cin >> i ;     
               }
              

              for(auto i :v){

                   auto tmp = t.upper_bound(i) ;

                   if(tmp == t.begin()){   // if thers no element <=i ;

                       cout << "-1\n"  ;

                   }
                   else {

                        tmp-- ;

                        cout << tmp -> first << "\n" ; // printing the value  <= i ;

                        t[tmp -> first]-- ;  // reducing freq by 1 ;

                        if(t[tmp -> first] == 0){  // if freq of a score becomes 0 , we delete it;

                             t.erase(tmp) ;
                        }

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
