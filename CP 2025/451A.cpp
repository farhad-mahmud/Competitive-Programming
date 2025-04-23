#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const int  MOD = 1e9 + 7;
void solve ()
{
        
                    int n , m ; cin >> n >> m ;
                      
                    int intersec = (n*m) ;

                    int cnt = 0 ;
                    int remove = 0 ;

                    while(intersec > 0){
                      
                            remove = (n-1) + (m-1) + 1 ;

                            intersec -= remove ;

                            n -= 1 ;
                            m -= 1 ;

                         

                            cnt++ ;

                    }
            

                 
                    if(cnt % 2 == 0){


                           cout << "Malvika" << endl; 
                    }

                    else {


                               cout << "Akshat" << endl; 
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
