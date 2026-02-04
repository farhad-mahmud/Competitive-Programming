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

const int N = 5e5 + 9;
const int MOD = 1e9 + 7;
int pref[N] ;

int phi(int n) {
    int result = n;

    for (int p = 2; p * p <= n; p++) {
        if (n % p == 0) {
            while (n % p == 0)
                n /= p;
            result -= result / p;
        }
    }
    if (n > 1)  
        result -= result / n;

    return result;
}
void precmp(){
      pref[1] = 1 ; 
     for(int i=2;i<N;i++){
         pref[i] = pref[i-1] + phi(i)*phi(i) ;
     }

}
void solve (int k)
{     
      int a, b ; cin >> a >> b ;
      int sum = 0 ;

      cout<< "Case " << k << ": " << pref[b] - pref[a-1] << nl;

}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;

   cin >> t ;
   precmp() ;
   int k = 1 ;
   while (t--) {

      solve(k) ;
      k++ ;
   }


   return 0;
}
