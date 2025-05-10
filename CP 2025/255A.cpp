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

                    int chst =0 , bicep = 0, back = 0 ;


                    for(int i=0 ;i<n;i++){

                          cin >> a[i] ;
                    }


                    for(int i=0;i<n;i++){

                        int nxt_chest = (i + 0) % 3 ;

                        int nxt_bicep = (i - 1) % 3 ;

                        int nxt_back = (i - 2) % 3 ;
                     

                        if(nxt_chest == 0){

                               chst += a[i] ;
                        }

                        else if(nxt_bicep == 0){

                               bicep += a[i] ;
                        }

                        else if(nxt_back == 0){

                               back += a[i] ;
                        }
   

                    }
      

                  int mx = max(chst ,max(bicep,back)) ;
               
              
                 
                  if(chst == mx){


                         cout << "chest" << endl;
                  }

                  else if(bicep == mx){

                          cout << "biceps" << endl;
                  }

                  else {

                            cout << "back" << endl;
                  }
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
