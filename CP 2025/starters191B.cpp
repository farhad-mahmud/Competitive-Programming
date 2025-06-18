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

int square(int n){

     
     return n*n ;
       
}

void solve ()
{
                        int n ; cin >> n ;
                          

                        vector<int > v ; 

                        for(int i =1 ;i<= n ;i++){

                              int sq = square(i) ;

                              if(sq <= n){

                              v.push_back(sq); ;

                           }
                        }


                        sort(v.begin(),v.end()) ;


                        cout << v[v.size()-1] << nl; 
 

       
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
