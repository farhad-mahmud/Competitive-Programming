#include <bits/stdc++.h>

using namespace std;

#define int long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const int  MOD = 1e9 + 7;
void solve ()
{
            
                    int n ;  cin >> n ;

                    int rem = 0 ;

                    int cnt = 1 ;

                    vector <int > v(n) ;

                    if(n >= 10){
                   
                               while(n >= 10){

                                            rem = n % 10 ;

                                            n = n/10 ;

                                            cnt++ ;
                               }

                    }




                     if(cnt ==1 ){

                           cout << 0 << endl;
                     }
                     else if(cnt % 2 ==1 ){

                            
                              cout << cnt-1 << endl;
                     } 

                     else if (cnt % 2 ==0) {



                                 cout << cnt/2 << endl; 
                     }
                      
}




int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

    int t = 1 ;
    cin >> t;
    while (t--) {


            solve() ;


    }

    return 0;
}
