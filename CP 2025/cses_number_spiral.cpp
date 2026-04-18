//---  Bismillahir Rahmanir Rahim ---//


#include <bits/stdc++.h>
using namespace std;

#define int  long long

#define nl       "\n"

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   x.begin(),x.end()
#define allr(x)  x.rbegin() ,x.rend()
#define dbug(x) cerr << (#x) << " is " << (x) << nl;
#define output(a) for(auto &it: a) cerr<<it<<" "; cerr<<nl;

// constrains

const int N = 1e9 + 9;
const int MOD = 1e9 + 7;


void solve ()
{  
            
           int x, y ; cin >> x >>y ;


           int k = max(y,x);

           int v = (1LL*k *k )- k + 1 ;

          if(k == x && k == y){
               cout << v << nl;
          }

          else if(k == y ){
               // then x is smaller ..

                if(k % 2 == 0){
                    int i = y ;
                    // even a x choto hole kombe..
                   while(i!= x){
                     v-- ;
                     i--;
                    }

                    cout << v << nl; 
                }
                else {
                  // odd a x choto hole.. barbe..
                  //cout << "h" << nl;

                int i = y ;

                while(i!= x){
                     v++ ;
                     i--;
                }

                cout << v << nl;
             }


          }
          else{
               // y is smaller .
               if(k % 2 == 0){
                   // even e y choto hole..barbe..
                      int i = x ;

                  while(i != y){
                    v++;
                    i--;
                  }

                   cout << v << nl;
               }
               else{
                     // odd e y choto hole kombe..

                      int i = x ;

               while(i != y){
                    v++;
                    i--;
               }

               cout << v << nl;

               }

              
          }

}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;

   cin >> t ;

   while (t--) {

      solve() ;

   }


   return 0;
}
