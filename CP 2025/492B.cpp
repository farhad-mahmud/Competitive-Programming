#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const int  MOD = 1e9 + 7;
void solve ()
{
        
                        int n , l ; cin >> n >> l ;

                        vector <double > a(n) ;

                        for(int i=0;i<n;i++){

                                  cin >> a[i] ;
                        }

                        sort(a.begin(),a.end()) ;
                      
                         double d = max(a[0] , l - a[n-1]) ;

                        for(int i=0 ; i<n-1;i++){

                               
                               d = max(d,(a[i+1] - a[i])/2) ;
                               


                        }

                        cout << fixed << setprecision(10) << d << endl; 



}




int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

      //   cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
