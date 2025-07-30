#include <bits/stdc++.h>
using namespace std;

#define int  long long

#define nl       "\n" 

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
#define dbug(x) cerr << (#x) << " is " << (x) << nl;
#define output(a) for(auto &it: a) cerr<<it<<" "; cerr<<nl;
// Constants
const int N = 1e5 + 9;
const int MOD = 1e9 + 7;


void solve ()
{
                 int n ; cin >> n ;

                 vector<int > divs ;

                for(int i=1;i*i<=n;i++){

                     if(n % i == 0){

                        divs.push_back(i) ;

                        if(i != n/i){

                            divs.push_back(n/i) ;

                        }
                     }
                }

               
               sort(divs.begin(),divs.end()) ;

                int even = 0,odd = 0 ;

                for(auto i : divs){

                      if(i % 2 == 0){

                          even++ ;
                      }
                      else{

                          odd++ ;
                      }
                }
          

            cout << odd << ' ' << even << nl; 
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
