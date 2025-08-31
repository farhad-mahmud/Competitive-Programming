#include <bits/stdc++.h>
using namespace std;

#define int  long long

#define nl       "\n" 

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define pii pair<int,int>
#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
#define dbug(x) cerr << (#x) << " is " << (x) << nl;
#define output(a) for(auto &it: a) cerr<<it<<" "; cerr<<nl;
// Constants
const int N = 1e5 + 9;
const int MOD = 1e9 + 7;


void solve ()
{
                 
                     int n ; cin >>n ;

                     vector<int > a(n) ;

                     for(int i=0;i<n;i++) cin >> a[i] ;

                     sort(a.begin() , a.end()) ;

                     

                     int total = 0 ;

                     output(a) ;

                    for(int i=1;i<n;i++){

                       int ans =0 ;

                          ans = abs(a[i] - i-1) ;

                         cerr << a[i] << ' ' << i << nl;
                          total += ans ;
                    }

                    cout << total << nl;


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
