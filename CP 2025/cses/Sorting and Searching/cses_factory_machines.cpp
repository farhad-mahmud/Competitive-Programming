#include <bits/stdc++.h>
using namespace std;

#define int  long long

#define nl       "\n" 

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
// Constants
const int N = 2e5 ;
const int MOD = 1e9 + 7;

int k[N] ;
int n, t ;

bool f(int x){
  
    int sum = 0 ;

   for(int i=1 ;i<=n;i++){
           
         sum += x / k[i] ;

         if(sum >= t) {

             return true ;

         }
   }

      return  sum >= t;
}
int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);
  
       
        
        cin >> n >> t ;


       for(int i =1 ;i<=n;i++){

            cin >> k[i] ;
       }


       int l =1 , r = 1e18 , ans = 0;
       
       while(l <=r){

             int mid = (l+r)/2 ;
              
             if(f(mid)){
              
                  ans = mid ;
                  r = mid-1 ;
             }

             else {
            
                   l = mid +1 ;
                  
             }

       }


       cout << ans << endl; 

    return 0;
}
