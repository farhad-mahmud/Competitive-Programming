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
                 int n ; cin >> n ;

                 vector<int > a(n) ;

                 for(int i=0;i<n;i++) cin >> a[i] ;


                  vector<int > v ;


                if(n % 2== 1){

                       int ans = 0 ;

                       int mn = 0 ;
                       int k = 0 ;

                       sort(a.rbegin(),a.rend()) ;

                       for(int i=0;i<n-1;i+=2){

                             mn = min(a[i] , a[i+1]) ;

                             ans += max(a[i],a[i+1]) ;

                             a[i] = a[i] - mn ;

                             a[i+1] = a[i+1] - mn ;

                             k = min(a[i] , a[i+1]);

                            // cerr << k << nl;

                             v.push_back(k) ;

                       }

                       // cerr << ans << nl; 

                        for(int i=0;i<v.size()-1;i++){

                             ans += min(v[i] ,v[i+1]) ;

                           
                        }


                        ans += a[n-1] ;

                        cout << ans << nl; 

                }

                else {

                         int ans = 0 ;

                       int mn = 0 ;
                       int k = 0 ;

                       sort(a.rbegin(),a.rend()) ;

                       for(int i=0;i<n-1;i+=2){

                             mn = min(a[i] , a[i+1]) ;

                             ans += max(a[i],a[i+1]) ;

                             a[i] = a[i] - mn ;

                             a[i+1] = a[i+1] - mn ;

                             k = min(a[i] , a[i+1]);

                             v.push_back(k) ;

                       }


                        for(int i=0;i<v.size()-1;i++){

                             ans += min(v[i] ,v[i+1]) ;
                        }


                        //ans += a[n] ;

                        cout << ans << nl; 


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
