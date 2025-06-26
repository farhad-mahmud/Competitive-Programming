#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define nl       "\n" 

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
// Constants
const int N = 1e5 + 9;
const int MOD = 1e9 + 7;


// circular exponentiation ;


int power(int x,int n){

      int cur = 1 % MOD ; // initially ans = 1 ;

      vector<int > v ;

      v.push_back(1) ;

      vector<bool > vis(MOD,false ) ;

      vis[1] = true ;
      int start = 0 ;


      while(true){

           cur = 1LL * cur * x % MOD ;

           if(vis[cur]){

              start = find(v.begin() ,v.end() ,cur) - v.begin() ;

              break ;
           }

           vis[cur] = true ;

           v.push_back(cur) ;
      }


      for(auto i : v){

             cout << i << nl; 
      }

      cout << nl  ;

      cout << "start : " << start << nl; 


       if(n < start) return v[n] ;

       int cycle_len = v.size() - start ;

       n -= start ;

      
      return v[start + n % cycle_len] ;  
}

void solve ()
{

           int n ; cin >> n ;

           vector<int > a(n) , b(n) ;

           for(int i=0;i<n;i++){

               cin >> a[i] >> b[i] ;
           }
             

          
           for(int i = 0 ;i<n ;i++){

               cout << power(a[i], b[i]) << nl; 

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
