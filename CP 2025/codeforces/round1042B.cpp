#include <bits/stdc++.h>
using namespace std;

#define ll  long long

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
            
          vector<int > v(n) ;
       
          if(n % 2 !=0){

               for(int i=0;i<n;i++){

                    if((i+1) % 2 ==1){

                        v[i] = -1 ;
                    }
                    else {

                        v[i] = 3 ;
                    }
               }
          }
          else {

                 for(int i=0;i<n-1;i++){

                     if((i+1)% 2 ==1){

                          v[i] = -1 ;
                     }
                     else {

                           v[i] = 3 ;
                     }
                 }

                 v[n-1] = 2 ;

          }

          for(auto i : v){

                cout << i << ' ' ;
          }

          cout << nl;
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
