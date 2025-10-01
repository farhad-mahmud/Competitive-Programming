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
               int n ; cin >> n ;

               vector<int > x(n) , y(n) ;

               for(int i=0;i<n;i++){

                    cin >> x[i] >> y[i] ;
               }


               int area = 0 ;

               for(int i=0;i<n;i++){

                  int j = (i+1) % n ;

                   area += ((x[i]*y[j]) - (x[j]*y[i]))  ;

               }


              cout << abs(area) << nl ;
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
