#include <bits/stdc++.h>
using namespace std;

#define int  long long

#define nl       "\n" 

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
// Constants
const int N = 2e5 + 9;
const int MOD = 1e9 + 7;  // i can do it ;

int n , k , a[N] ;

bool f(int x){ // is the answer (maximum of sums) <= x 
            

         for(int i=1 ;i<=n;i++){

              if(a[i] > x){  // if any single value is > x ;

                  return false ;
              }
         }
         
         int min_subarray_cnt = 1 ;

         int cur_sum = a[1] ;

         for(int i=2 ;i<=n;i++){

              if(cur_sum + a[i] <= x){
                   cur_sum += a[i] ;
              }

              else {
                 
                    min_subarray_cnt++ ;

                    cur_sum = a[i] ;

              }
         }


         return min_subarray_cnt <=k ;
}

void solve ()
{
               
               cin >> n >> k ;

               for(int i =1 ;i<=n;i++){

                     cin >> a[i] ;
               }


               int  l = 0 , r = 2e14 , ans = 0 ;


               while(l<= r){

                     int  mid = (l+ r) /2 ;

                    
                   //cout << mid << nl; 
                     if(f(mid)){ 
                     
                          ans = mid ;

                          r = mid-1 ;                      

                     }
                     else {

                           l = mid + 1;
                     }

               }

               cout << ans << nl; 

    
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
