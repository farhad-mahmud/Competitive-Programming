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

            vector<int > x ;
            vector<int > y ;

            sort(a.begin(),a.end()) ;

            for(int i=1;i<=n;i+=2){

                 x.push_back(a[i]) ;
            }

            for(int i=2;i<n;i+=2){

                 y.push_back(a[i]) ;
            }

            int md1 =0,md2 = 0 ;

            if(x.size() % 2 ==0){

                 md1 = x.size()/2 - 1;
            }
            else{

                  md1 = x.size()/ 2 ;
            }

            if(y.size() % 2 == 0){
                 md2 = y.size() /2 - 1 ;
            }
            else {
                 md2 = y.size() /2 ;
            }

           
         cout << abs(x[md1] - y[md2]) << nl; 

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
