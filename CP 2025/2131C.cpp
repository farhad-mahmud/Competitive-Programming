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
const int N = 2e5 + 9;
const int MOD = 1e9 + 7;


void solve ()
{
                     int n , k ; cin >> n >> k ;

                     vector<int > a(n+1) ;
                     for(int i=1;i<=n;i++) cin >> a[i] ;

                     vector<int > b(n+1) ;
                    for(int i=1;i<=n;i++) cin >> b[i] ;

                   
                    for(int i=1;i<=n;i++){

                        a[i] %= k ;

                        a[i] = min(a[i] , k - a[i]) ; // min(r,k-r) ;
                    }

                    for(int i=1;i<=n;i++){

                        b[i] %= k ;
                        b[i] = min(b[i] , k- b[i]) ;
                    }


                    sort(all(a)) ;
                    sort(all(b)) ;


                    if(a==b){
                        yes;
                    }
                    else {

                        no ;
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
