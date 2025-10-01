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

                vector<int > a(n+1) ;

                for(int i=1;i<=n;i++) cin >> a[i] ;

                map<int,int > mp ;

                
                int l = 1 ;


                int ans = 0 ;

                for(int r = 1;r<=n;r++){
                      
                      mp[a[r]]++ ;

                      while(mp[a[r]]>1){

                           mp[a[l]]-- ;
                           l++ ;
                      }

                      ans = max(r-l+1 , ans) ;

                }


                cout << ans << nl; 
          
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
