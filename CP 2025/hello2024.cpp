//---  Bismillahir Rahmanir Rahim ---//


#include <bits/stdc++.h>
using namespace std;

#define int  long long

#define nl       "\n"

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   x.begin(),x.end()
#define allr(x)  x.rbegin() ,x.rend()
#define dbug(x) cerr << (#x) << " is " << (x) << nl;
#define output(a) for(auto &it: a) cerr<<it<<" "; cerr<<nl;

// constrains

const int N = 1e5 + 9;
const int MOD = 1e9 + 7;


void solve ()
{  
         int n ; cin >>n ;
         vector<int > a(n); for(int i=0;i<n;i++)cin >> a[i];

         int ans = 0 ;
         int x = 1e9 , y = 1e9 ;

         int cst = 0 ;
         for(int i=0;i<n;i++){
              if(x > y){
                 swap(x,y);
              }

              if(a[i] <=x){ //1
                  x = a[i];
              }
              else if(a[i] <= y){ // 3
                   y = a[i] ;
              }
              else if( a[i] > y){ // 2
                   x = a[i] ; 
                   cst++ ;
              }
         }

         cout << cst << nl; 
}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;

   cin >> t ;

   while (t--) {

      solve() ;

   }


   return 0;
}
