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
// Constants
const int N = 1e5 + 9;
const int MOD = 1e9 + 7;


void solve ()
{
          int n , c ; cin >> n >> c; 

          vector<int >a (n+1) ;

          int sum = 0 ;

          for(int i=1;i<=n;i++) 
            {
               cin >> a[i] ;
               sum += a[i] ;
            }
         
          //int need =0  ;
          int ans =0 ;

          int k= c ;

          sort(a.begin(),a.end()) ;

          for(int i=1;i<=n;i++){

              bool eq = false ;
              bool less = false ;

               if(a[i] == c){

                    eq = true ;
               }

               if(a[i] < c){

                    less = true ;
               }

               if()


          }

    

          cerr << c << nl;

          cout << c - k << nl ; 

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
