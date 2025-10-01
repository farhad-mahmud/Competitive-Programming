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

                      int sum = n*(n+1)/2 ;

                      for(int i= 2 ;i<=n && i*i<= sum ;i++){

                               if(sum % i == 0){   
                                 cout << "Yes" << endl;
                                  cout << 1 << " " << i <<  endl ;
                                  cout << n-1  << " " ;
                               
                               for(int j =1 ;j<=n ;j++){
                                    if(j != i){
                                       cout << j << " " ;
                                    }
                                   
                               }
                                return ;
                             }
                      }
              
                cout << "No" << endl;
}


 // remember this 

// optimise loop uses via implementing number theory / algorithm
// optimise array elements calculation via number theory / algorithm

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
