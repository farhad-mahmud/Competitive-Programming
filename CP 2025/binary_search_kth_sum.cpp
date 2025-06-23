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

int n ,k ;

int  ff(int lim , vector<int >& b){
    
    int l = 1 , r = n , ans = 0 ;

    while(l<=r){

         int mid = (l + r) / 2 ;

         if(b[mid] <= lim){

               ans = mid ;
               l = mid+1 ;
         }
         else {

              r = mid - 1;
         }
    }

    return ans  ;
}
bool f (int x, vector<int >&a , vector<int >& b){ // is the answer (kth smallest sum) <=x ;
   
   int cnt = 0 ;
    
    for(int i =1 ;i<=n ;i++){
          int lim = x- a[i] ;

          // count how many j's are there such that 
          // a[i] + b[j] <=x   , b[j] <= x - a[i] , b[j] <= lim ;

          cnt += ff(lim ,b) ;

    }
      
return cnt >= k ;

}
void solve ()
{
                 cin >> n >> k ;
                 vector<int > a(n+1) ;
                 vector<int > b(n+1) ;
                 
                 for(int i = 1;i<=n ;i++){
                       cin >> a[i] ;
                 }

                 for(int i= 1; i<=n;i++){

                      cin >> b[i] ;
                 }
                 
                 sort(a.begin() , a.end()) ;
                  sort(b.begin() , b.end()) ;
                  
                int l = 0 , r = 2e9 , ans = 0 ;


                while(l<=r){           // tc = log(n) ;

                     int mid = l + (r-l) / 2 ;

                     if(f(mid,a,b)){
                      
                       // cout << ans << nl;
                          ans = mid ;
                          
                          r = mid-1 ;

                     }
                     else {

                          l = mid+1 ;
                     }
                }


                cout << ans << nl ; 


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
