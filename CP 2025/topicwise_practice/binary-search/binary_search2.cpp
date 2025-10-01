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

int a[N] ; 

int search(int l , int r){
 
     int ans = -1 ;  // index ;

     while( l <=r){

          int mid = (l+r) /2 ;

          if(a[mid] == 1 ){

                  ans = mid ;

                  r = mid - 1;  // we go left ;

          }
          else {   // if a[i] = 0 ;

                l = mid+1 ;    // we go right 
          }
     }

     return ans ;

}
int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

     int n ; cin >> n;

     for(int i=1 ;i<=n;i++){

           cin >> a[i] ;
       }


       cout << search(1,n) << endl; 

    return 0;
     
}
