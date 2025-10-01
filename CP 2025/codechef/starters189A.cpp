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

void solve ()
{
      
                 int a , b ;   cin >> a >> b ;

                 int slice_needed = ((a+1)*4) + (b*3) ;

                 //cerr << slice_needed << nl; 
                
                 
                   
                  if(slice_needed < 8){

                          cout << 1 << nl;
                          return ;
                  }
                  
                  if(slice_needed % 8 == 0){


                        cout << slice_needed / 8 << endl;
                  }

                  else {

                        cout << (slice_needed/ 8) + 1 << endl; 
                  }
       
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
