#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)


#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   x.begin(),x.end()  
const int  MOD = 1e9 + 7;

void solve ()
{
        
                     int n ; cin >> n ;

                     vector<int > a(n) ;

                     for(int i=0;i<n;i++){

                             cin >> a[i] ;
                     }

                     int mx = *max_element(all(a)) ;
                      
                     int g =  0;

                     for(int i=0;i<n;i++){


                           g = __gcd(g,a[i]) ;
                     }

                     if(g == mx){

                           cout << "No" << endl;

                           return ;
                     }

                     cout << "Yes" << endl;


                     for(int i=0;i<n;i++){

                           if(a[i] == mx){

                                cout << "1 " ;
                           }
                           else {

                                 cout << "2 " ;
                           }
                     }

                  
                   cout << endl; 
                              

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
