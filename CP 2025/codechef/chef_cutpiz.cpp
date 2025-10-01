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

                 int gc = 0 ;

                 int sum = 0 ;

                 for(int i=1;i<=n-1;i++){

                      int df =0 ;
                      df=  abs(a[i]- a[i+1]) ;

                      sum+= df ;

                      gc = __gcd(df, gc) ;

                 }

                int rest = 360 - sum ;

                int gc2 = __gcd(rest , gc) ;

                int mx = 360 / gc2 ;

               cout << mx - n  << nl ;
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
