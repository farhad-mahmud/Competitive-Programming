

//---  Bismillahir Rahmanir Rahim ---//

//------------------------------//
//        Author: Farhad       //
//------------------------------//

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

const int N = 1e5 + 9;
const int MOD = 1e9 + 7;


void solve ()
{
        int n , k ; cin >> n >> k ;

        // 4(n-1) escaping cells ..

        int h = (n*n)- k ;

        if(h >=2 || h == 0){

              no ;
              return ;
        }
        else{

           if((n*n) == k){
                int m = n ;
             while(m--){
               for(int i=1;i<=n;i++){
                   cout << "U" ;
               }
               cout << nl;
             }
           }
           else {

               int c = (n*n) - k ;

               // we have to create c cycles and rest U grid ;

               int grid[n][n] ;
               int m1= c / 2 ;
               int n1 = 2 ;
               // c cycles gird

               for(int i= n1;i<=)
               for(int i=)

               // the rest grid ;;
               for(int i=0;i<n;i++){
                  for(int j=0;j<n;j++){

                  }
               }

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
