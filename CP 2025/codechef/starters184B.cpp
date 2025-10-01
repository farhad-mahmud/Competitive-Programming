#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   (x.begin(),x.end()) ;
const int  MOD = 1e9 + 7;
void solve ()
{
        
                       int n ; cin >>  n ;

                      
                       vector <int > a ;

                       if(n==1 ){

                              cout << -1 << endl;
                              return ;
                       }

                       if(n % 2 ==0){

                               int in = n/2+1 ;

                               for(int i=1; i<=n/2;i++){

                                       a.push_back(1) ;
                               }

                               for(int i=in ; i<=n;i++){

                                       a.push_back(-1) ;
                               }
                       }
                       else {
                                
                                int in1 = (n - 3) ;

                                int in2 =  in1/2 ;

                                for(int i=1 ;i<=in2;i++){

                                          a.push_back(1);
                                }
                                for(int i=in2+1 ;i<=in1;i++){

                                          a.push_back(-1);
                                }

                                a.push_back(1) ;
                                a.push_back(2) ;
                                a.push_back(-3) ;
                                 
                       }

                    
                     for(auto i : a){

                             cout << i << " " ;
                     }

                     cout << endl; 
                    

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
