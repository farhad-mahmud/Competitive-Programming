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


int f_time(int pos , int dir ,int s){

       if(dir == 1){

            return s- pos ;
       }
       else {

            return pos ;
       }
}

void solve ()
{
                 int n , s ; cin >> n >> s ;
   
                  vector<int > dx(n+1) , dy(n+1) , x(n+1) ,y(n+1) ;

                 for(int i=1 ;i<=n;i++){
                    cin >> dx[i] >> dy[i] >> x[i] >> y[i] ;
                 } 

                int cnt = 0 ;

                for(int i=1 ;i<=n;i++){


                     int  x_time = f_time(x[i] , dx[i] , s) ;
                     int  y_time = f_time(y[i] , dy[i] , s) ;

                        if(x_time == y_time){
                            cnt++ ;
                         }

                }
                       

                       cout << cnt << nl; 


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
