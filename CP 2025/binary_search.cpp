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

int a[N] , x ;

bool search (int l, int r){

      if(l > r) return false ;

      int mid = (l+r) / 2;


      if(a[mid] == x){

           return true ;
      }
      else if(x > a[mid]){

            return search(mid+1, r) ;
      }
      else {

           return search(l, mid-1) ;
      }
}
int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

        // cin >> t ;

         int n ,q ; cin >> n >> q ;

         for(int i =1 ;i<=n;i++){

                cin >> a[i] ;
         }

         while(q--){
            
               cin >> x ;

               if(search(1, n)){

                    yes ;
               }
               else {

                    no ;
               }
           
         }


    return 0;
}
