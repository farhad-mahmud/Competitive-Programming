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


// vector should be sorted !! ;


void solve () 
{

             int n ;cin >> n;

             vector<int > a(n+1) ;

             for(int i =1 ;i<=n;i++){

                  cin >> a[i];

             }

 
             int x = 4 ;

             // lower_bound >= x ;
             
             // upper_bound >x 

             auto it1 = upper_bound(a.begin(),a.end(),x) ;

             auto it2 = lower_bound(a.begin(),a.end(),x) ;

       
             //cout << "index : " << it - a.begin() << nl; 
                  
             cout << (it1 - it2) << nl; 

             // iteratior - iterator = distance ;

             // we can see number of same elements in a sorted element when we do
              // upperbound - lowerbound ;



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
