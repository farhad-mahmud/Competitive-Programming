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
void f(int x1, int y1, int x2, int y2, int x3, int y3) {

    int c = (x2 - x1)*(y3 - y1) - (y2 - y1)*(x3 - x1);
    
     if(c==0){
          
         cout << "TOUCH" << nl;
     }
     else if(c >0){
         cout <<"LEFT" << nl;
     }
     else if(c <0){

          cout << "RIGHT" << nl;
     }

}


void solve ()
{

                int x1 ,y1 , x2 ,y2 , x3,y3 ;cin >>x1 >> y1 >> x2 >> y2 >>x3 >> y3 ;


                f(x1,y1,x2,y2,x3,y3) ;
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
