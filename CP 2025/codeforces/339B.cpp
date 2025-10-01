#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const int  MOD = 1e9 + 7;
void solve ()
{
        
                 
                 int n  , m ; cin >> n >> m ;

                 vector <int > a(m+1) ;

               //  vector <int > v ;

                 for(int i=0; i<m; i++){

                           cin >> a[i] ;
                 }
         
            

                 int curr = 1;

                 int cnt = 0 ;

                 for(int i=0 ;i<m;i++){

                    
                     if(a[i] >= curr){

                             
                               cnt += a[i] - curr ;
                      }
                      else {

 
                                 cnt +=   n - (curr - a[i]) ;
                      }


                        curr = a[i] ;

                 }

    


               cout << cnt << endl; 
                     
               
}




int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

         //cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
