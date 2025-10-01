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
                 
            int pos , start ; cin >> pos >> start ;


            int dif = 50 - pos ;

            bool f = false ;


            // has pair ..start to start + 6 .. 

            //cerr << dif << nl; 

            int end = start + 5 ;
             
             // dif = 14 ;

            while(start <= end){

                  int sum = start + end ;

                  if(sum == dif){

                        f= true ;
                        break ;

                  }
                  else if(sum < dif){ 

                     start++ ;

                  }
                  else {

                        end-- ;
                  }

            }


            if(f) { yes ;}
            else { no ;}
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
