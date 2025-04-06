#include <bits/stdc++.h>

using namespace std;

#define int long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const int  MOD = 1e9 + 7;
void solve ()
{
                int n ; cin >>n ;

                vector<int > v(n) ;

                for(int i=0;i<n;i++){

                       cin>> v[i] ;
                }

              
               

                    
               
             //   sort(v.begin(),v.end()) ;
                
                  int mi = 1e18 ;

                 for(int i=0;i<n-1;i++){

                         
                         mi = min(mi,(v[i+1]-v[i])) ;

                   


                }


              int op = (mi/2) + 1 ;


              if(mi<0) {
                    
                     cout << 0 << '\n' ;

              }

              else {

                      cout << op << '\n' ;
              }


     

}




int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

    int t = 1 ;
    cin >> t;
    while (t--) {


            solve() ;


    }

    return 0;
}
