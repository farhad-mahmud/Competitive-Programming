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

void solve ()
{
              
                int n ; cin >> n ;

                vector<string> c(n+1) ;
                vector<int > l(n+1) ;


                int sum = 0 ;

                for(int i=1 ;i<=n;i++){ 
                  cin >> c[i] >> l[i] ;
                  //sum+= l[i] ;
                }

               vector<string > s ;

               for(int i=1;i<=n;i++){

                    sum+= l[i] ;

                 if(sum > 100){
                    cout << "Too Long" << nl; 
                    return ;
                }

                  for(int j =1 ;j<=l[i];j++){

                         s.push_back(c[i]) ;
                  }
               }

               
             for(auto i : s){

                  cout << i  ;
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
