#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
#define vi       vector<int > 
#define  forr    for(auto &i : x) 
const int  MOD = 1e9 + 7;


void solve ()
{
                  int n ; cin >> n; 

                  vector<int > a(n) ;

                  for(int i=0;i<n;i++){

                         cin >> a[i] ;
                  }


                  int pol = 0;

                  int cri = 0 ;

                  int cnt = 0  ;
 
        //we have to count polices till a -1 ;



                  for(int i=0;i<n;i++){
                      
                         if(a[i] >= 1){
                              
                              pol += a[i] ;

                             // cri= 0 ;
                         }
                         
                          if(a[i] == -1){

                            if(pol >= 1){

                                  pol-- ; // if even 1 police officer is available
                                          // we cant increment any crime++ ;
                            }
                            else if(pol == 0){

                                  cri++ ;
                            }
                         }

                  }



                    cout << cri << endl; 

         
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
