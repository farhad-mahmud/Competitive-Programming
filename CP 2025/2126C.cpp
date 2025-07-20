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
                  int n ,k ;cin >> n >> k ;

                  vector<int > a(n) ;

                  for(int i=0;i<n;i++){
                      cin >> a[i] ;
                  }
 
                  
                  sort(a.begin(),a.end()) ;

                  int t = 0, water = 1 ;

                  for(int i=0;i<n-1;i++){
                        
                       t+= i + abs(a[i] - a[i+1]) ;
                       water++ ;
                  }


                  cerr << n  << ' ' << t << nl;

                  if(n > t){
                       no ;
                  }
                  else {
                      yes;
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
