#include <bits/stdc++.h>
using namespace std;

#define int  long long

#define nl       "\n" 

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
// Constants
const int N = 1e5 + 9;
const int MOD = 1e9 + 7;

void solve ()
{
              int n ; cin >> n ;
              vector<int > a(n+1) ;


              for(int i=1;i<=n;i++){
                    cin>> a[i] ;
              }
              

             for(int i=1;i<=n-1;i++){

                    if(abs(a[i] - a[i+1]) <=1){

                           cout << 0 << nl;
                           return ;
                    }               
             }

             if(n==2){
                 cout << -1 << nl;
                 return ;
             }


             vector<int > f = a ;

             sort(f.begin(),f.end()) ;

             if(a == f){

                 cout << -1 << nl;
                 return ;
             }


             for(int i=2;i<=n-1;i++){

                   if(a[i-1] < a[i] && a[i] > a[i+1] || a[i-1] > a[i] && a[i] < a[i+1]){

                              cout << 1 << nl;

                              return ;
                   }
             }

              
          cout << -1 << nl; 
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
