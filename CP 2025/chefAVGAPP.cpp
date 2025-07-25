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
                    int n , k ; cin >> n >> k ;

                    vector<int > a(n) ;
                    int sum =0 ;

                    for(int i=0;i<n;i++){
                         cin >> a[i] ;
                         sum += a[i] ;
                    }

                    sort(a.begin(),a.end()) ;
                    int sum2 = 0 ;

                    int mn1 = a[0] ,mn2 = a[1] ;



                    
                    while(k >0){

                          int t = (mn1+mn2+1)/ 2;

                          if(t< mn2){
                              mn2 = t ;
                              sum +=t ;
                          }
                          else {

                               sum += t*k ;
                               break ;
                          }

                          k-- ;
                    }


                    cout << sum << nl;


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
