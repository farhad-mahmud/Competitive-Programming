#include <bits/stdc++.h>

using namespace std;

#define ll  long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const int  MOD = 1e9 + 7;
void solve ()
{
        
                       int n ; cin >> n ;
                           
                        if(n <= 3){


                                 cout << -1 << endl; 

                                 return ;
                        }

                        int sum = 0 ;

                       

                        int cnt = 0 ;

                          sum = 3 * n - 3;

                       
                   //    cout << sum << endl; 

                      // int ma = *max_element(v.begin(),v.end()) ;

                   
                         if (2*n < sum){


                                  cout << sum << endl;
                         }
                         else {


                                cout << -1 << endl;
                         }

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
