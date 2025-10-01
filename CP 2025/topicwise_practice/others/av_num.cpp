#include <bits/stdc++.h>
using namespace std;

#define ll  long long

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
            int n , k , v ; cin >> n >> k >> v ;

            vector<int > a(n) ;

            int sum = 0 ;

            for(int i=0;i<n;i++) {

               cin >> a[i] ;
               sum += a[i] ;
            }


            int x = (n*k) ;

            int f = ((n+k)* v) ;

            int ans = (f- sum)/k ;

            //cerr << ans << nl; 

            int ans2 = (ans*k) + sum ;
            
            //cerr << ans2 << nl ;

            if(ans <=0){

                 cout <<  -1 << nl;
                 return ;
            }


           if(ans2 / (n+k) == v){

                cout << ans << nl;
           }
           else {

                cout << -1 << nl; 
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
