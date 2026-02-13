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

const int N = 1e5+ 9;
const int MOD = 1e9 + 7;

map<int,int> dp ;
int fibo(int i){

   if(dp.count(i)) return dp[i] ;
   if(i== 0) return 0 ;
   if(i== 1 or i == 2) return 1 ;


   if(i & 1){
       int k = (i+1)/2 ;
       int a = fibo(k-1);
       int b = fibo(k) ;
       dp[i] =  a*a + b*b ;      
   }
   else{
       int k = i/2;
       int a = fibo(k-1) ;
       int b = fibo(k) ;
       dp[i] =  (2*a*b) + b*b ;
   }
   return dp[i] ;
}

void solve ()
{     

       int n ; cin >>n ;
       //cerr << n << nl;
       cout << fibo(n)  << nl;
}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;

   //cin >> t ;

   while (t--) {

      solve() ;

   }


   return 0;
}
