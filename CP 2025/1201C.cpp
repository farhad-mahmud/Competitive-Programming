#include <bits/stdc++.h>
using namespace std;

#define int  long long

#define nl       "\n" 

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
// Constants
const int N = 2e5+ 9;
const int MOD = 1e9 + 7;


int n , k ,min_op ;
int a[N] ;


bool f(int x){  
       

        int min_op = 0 ;

       for(int i= (n+1)/2 ;i<=n;i++){

            if(a[i] < x){

                  min_op += x-a[i] ;  
            }

       }  


       return min_op <= k ;

}
int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         
           cin >> n >> k ;

          for(int i=1;i<=n;i++){

               cin >> a[i] ;
          }

            
          sort(a+1, a+n+1) ;
           
          int l = 0 , r = 2e9 , ans = 0 ;

          while(l<=r){

               int mid = l + (r-l) / 2 ;

               if(f(mid)){

                   ans = mid ;

                   l = mid+1 ; // we go right ;
               }
               else {

                    r = mid -1 ; // we go left ;
               }
          }

          cout << ans << nl; 

    return 0;
}
