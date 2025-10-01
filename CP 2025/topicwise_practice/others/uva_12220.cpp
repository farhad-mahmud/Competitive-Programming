//------------------------------//
//        Author: Farhad       //
//------------------------------//

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

// constrains 

const int N = 1e5 + 9;
const int MOD = 1e9 + 7;


void solve ()
{        

              int d , n ; cin >> d >> n ;

              vector<int > a(n) ;

              for(int i=0 ;i<n;i++) cin >> a[i] ;


              vector<int > pref(n) ;

              pref[0] = a[0] ;
              for(int i=1;i<n;i++){

                  pref[i] = pref[i-1] + a[i] ;
              }



              output(pref) ;
               
              

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
