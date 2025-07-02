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
             
                  int n ; cin >> n;

                  vector<int > pref_min(n+2) ;
                  vector<int > a(n+1) ;

                  vector<int > suf_max(n+2) ;

                  for(int i= 1 ;i<=n;i++){

                        cin >> a[i] ;
                  }
   
                  
                   pref_min[0] = 1e18 ;

                   for(int i= 1 ;i<=n;i++){

                         pref_min[i] = min(pref_min[i-1] , a[i]) ;

                  }


                  
                  for(int i=n ;i>=1 ;i--){

                          suf_max[i] = max(suf_max[i+1] , a[i]) ;
                  }


                 // for(int i= n;i>=1;i--){

                    //   cout << suf_max[i] << ' ' ;
                 // }
        
                  for(int i=1 ;i<=n;i++){
                     
                         if(a[i] <= pref_min[i] || a[i] >= suf_max[i]){
                                
                                     cout << 1  ;     
                         }
                         else {
                               cout << 0  ;
                         }

                  }

           
           cout << nl; 
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
