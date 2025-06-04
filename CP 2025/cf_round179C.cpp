#include <bits/stdc++.h>

using namespace std;

#define int long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)
#define nl       "\n" 

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()

const int  MOD = 1e9 + 7;

void solve() {
                 

             int n ; cin >> n ;

             vector<int > a(n+1) ;

             for(int i=1;i<=n;i++){

                   cin >> a[i];
             }

             vector<int > pref(n+1) ;
             vector<int > suff(n+1) ;

             for(int i=1;i<=n;i++){

                  pref[i] = 1LL*(i-1)*a[i] ;
             }

             for(int i=2;i<=n;i++){

                  if(a[i] == a[i-1]){

                      pref[i] = pref[i-1] ;
                  }
             }

             for(int i=n;i>=1;i--){

                 suff[i] = 1LL*(n-i)*a[i] ;
             }


             for(int i=n-1;i>=1;i--){

                    if(a[i] == a[i+1]){

                          suff[i] = suff[i+1] ;
                    }
             }


             int ans = (long long)1e18 ;

             for(int i=1;i<=n;i++){

                   ans = min(ans, suff[i] + pref[i]) ;
             }
            


              cout << ans << endl; 

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