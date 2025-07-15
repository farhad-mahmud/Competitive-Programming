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
            int n , x ; cin >> n >> x ;

            vector<int > a(n+1) ;
            int cnt1 = 0 ;
            for(int i=1;i<=n;i++){
                  cin >> a[i] ;

                if(a[i] == 1){
                    cnt1++ ;
                }
            }


           int cnt11 = 0 ;
           

           for(int i=1;i<=n;i++){

                 if(a[i] == 1){
                   
                     for(int j= i ;j<i+x;j++){
                             
                           if(a[j] == 1){

                                 cnt11++ ;
                           }
                          
                     }
                     break ;
                 }

           }

          cerr << cnt1 << nl ;

          cerr << cnt11 << nl ;

          if(cnt1>cnt11){

               no ;
          }
          else {

                yes ;
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
