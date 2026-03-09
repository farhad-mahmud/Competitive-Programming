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

int two(int n){
    
    int cnt = 0 ;
    while(n % 2 ==0){
         cnt++ ;
         n/= 2;
    }
    return cnt ;
}

int five(int n){
     int cnt  = 0 ;
     while(n % 5 ==0){
         cnt++ ;
         n/=5 ;
     }
     return cnt ;
}
void solve ()
{  
          int n , m ; cin >> n >> m ;

          vector<pair<int,int >> v ;
          //cerr << sqrtl(m) << nl; 
          
          int ntw = two(n);
          int nfv = five(n);

          int k = 1;

          // first level the count of two and fives.. by holding one 
          // and incrementing other till two number same..
         while(ntw < nfv && k*2 <= m){
               k *= 2 ;
               ntw++ ;
         }
          while (nfv < ntw && k * 5 <= m) {
               k *= 5;
               nfv++;
         }

         while(k*10 <=m){
              k*=10 ;
         }

         k *= (m/k);

         cout << n*k << nl; 

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
