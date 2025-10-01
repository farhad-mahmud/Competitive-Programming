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
            vector<int > a(n) ;
            

            for(int i=0;i<n;i++) {
               cin >> a[i] ;
              // sum += a[i] ;
            }


            sort(all(a)) ;

            int mx = a[n-1] ;

            int sum = 0 ;
               
            for(int i=0 ;i<n-1;i++){
                 sum+= a[i] ;
            }

            //cerr << sum << nl;

            if(mx <= sum){
                 cout << mx + sum << nl;
            }
            else {

                 cout << 2* mx << nl; 
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
