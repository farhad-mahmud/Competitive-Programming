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

                     int gc = 0 ;

                     for(int i=1;i<=n;i++){

                        cin >> a[i] ;
                     }

                     for(int i=1;i<=n;i++){

                           gc = __gcd(gc,a[i]) ;
                     }

                    sort(a.begin(),a.end()) ;


                    int max = a[n] ;


                    vector<int > x ;
                    vector<int > rest ;

                    for(int i=1;i<=n;i++){

                          if(max == a[i]){

                                x.push_back(a[i]) ;
                          }
                          else {

                               rest.push_back(a[i]) ;
                          }
                    }


                    int gc2 = 0 ;

                   // cerr << max << nl;

                   for(auto i: rest){

                        gc2 = __gcd(gc2, i) ;

                        cerr << i << nl;
                   }


                   cout << gc2 + max << nl ;
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
