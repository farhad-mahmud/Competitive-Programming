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

               vector<int > a(n+1) ;

               for(int i=1;i<=n;i++) cin >> a[i] ;

               //int x = a ;

               //sort(x.begin(),x.end()) ;

               int mx = *max_element(a.begin(),a.end()) ;

               //cerr << mx << nl;
                 
              for(int i=1;i<=n;i++){

                  if(a[i] == mx){

                      cout << i << nl; 
                      break ;
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
