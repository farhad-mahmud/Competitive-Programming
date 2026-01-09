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
const int N = 1e6 + 9;
const int MOD = 1e9 + 7;


void solve ()
{
                    int n ; cin >> n ;  
                     
                   vector<int > div(N,0) ;
                   
                   for(int i=0;i<n;i++){

                        int x ; cin >> x ;

                      for(int j=1;j*j<=x;j++){

                           if(x % j == 0){

                               div[j]++ ;

                               if(j != x/j){

                                    div[x/j]++ ;
                               }
                           }

                      }

                   }

                
                for(int i = N-1 ;i>=1 ;i--){

                     if(div[i] >=2 ){

                          cout << i << nl;

                          cerr << div[i] << nl;
                          break ;
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
