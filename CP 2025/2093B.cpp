#include <bits/stdc++.h>

using namespace std;

#define int long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";7064727
#define no cout << "NO\n";

const int  MOD = 1e9 + 7;
void solve ()
{
            
                   string n ;  cin >> n ;
                    
                   int cnt = n.size() ;

                   for(int i=n.size()-1 ; i>=0 ;i--){


                               if(n[i] == '0'){

                                      cnt = i ;
                               }
                               else {

                                      break ;
                               }
                   }

                   int c = 0 ;

                
                   for(int i = 0;i<cnt ;i++){

                           if (n[i] == '0'){

                                 c++ ;
                           } 
                   }
         
             

                   cout << n.size()-1-c << endl; 


                    
                      
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
