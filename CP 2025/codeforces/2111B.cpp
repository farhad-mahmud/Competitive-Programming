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

int w[150] ;
int l[150] ;
int h[150] ;

int fibo(int n ){

      if(n==1 ){

           return 1 ;
      }
      else if(n==2){

           return 2 ;
      }
      else {


            return f(n-1) + f(n-2) ; 
      }


}
void solve ()
{
      
              int n , m ; cin >> n >> m ;

              //int side of the cube is fibo(i)

              for(int i=1;i<=m ;i++){

                    cin >> w[i] >> l[i] >> h[i] ;
                    

               }
  




}


int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

        // cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
