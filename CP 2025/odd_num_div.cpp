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
// Constants
const int N = 1e5 + 9;
const int MOD = 1e9 + 7;
const int MAX = 1e10 ;

bool vis[N] ;    
vector<int> prime ;

int spf[N] ;

void sieve(){    // for prime expo info / factorize many number quickly 

   for (int i = 2; i < N; i++) {
    spf[i] = i;
  }
  for (int i = 2; i < N; i++) {
    if (spf[i] == i) {
      for (int j = i; j < N; j += i) {
        spf[j] = min(spf[j], i);
      }
    }
  }   

}

vector<int > v[N] ;

void solve ()
{
         
           for(int i=1; 1LL * i * i <=MAX;i++){ // 10^5 numbers ;
              
              int x = i ;
              int num_of_divi = 1 ; // num of divisors of x^2 ;
              
                while (x > 1) {
                int p = spf[x], e = 0;
                while (x % p == 0) {
                     ++e;
                     x /= p;
                  }
                num_of_divi *= (2 * e + 1);
             } 
          
              v[num_of_divi].push_back(1LL * i * i) ;

         }  


        int  q ; cin >> q  ;


        while(q--){

           int k , l , r ; cin >> k >> l >> r ;
           int ans = 0 ;

            ans = upper_bound(v[k].begin(), v[k].end(),r) - lower_bound(v[k].begin(),v[k].end(),l) ;
            cout << ans << nl ;
        } 

      
}

int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;
          sieve() ;
         //cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
