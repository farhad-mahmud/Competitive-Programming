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

int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

          int n , q ; cin >> n >> q ;

          vector<int > x (q+1) ;

          for(int i=1 ;i<=q;i++){

                cin >> x[i] ;
          }
           

          vector<int > box(n+1) ;

          vector<int > ball(q+1) ;

  

         for(int i=1 ;i<=q;i++){

               if(x[i] >= 1){

                   box[x[i]]++ ;

                   cout << x[i] << ' ' ;

               }

               else {
                      
                        
                     int pos = min_element(box.begin()+ 1 , box.begin() + n+ 1) - box.begin() ;
                    
                       box[pos]++ ;

                       cout << pos << ' ' ;
                      
               }
         }


    return 0;
}
