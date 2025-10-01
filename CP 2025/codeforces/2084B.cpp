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

              
              vector <int > a(n) ;

              

               for(int i=0;i<n;i++){

                     cin >> a[i] ;
 
               }

               sort(a.begin(),a.end()) ;

               int g = 0 ;

               for(int i=1;i<n;i++){             

                       if(a[i] % a[0] == 0){

                             g = __gcd(g, a[i]) ;
                       }
               }

               if(g == a[0]) {

                         yes ;
               }
               else {

                        no ;
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
