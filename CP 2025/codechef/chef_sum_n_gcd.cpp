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

 
void solve ()
{
             int n;  cin >> n ;

             vector<int > a(n) ;

             for(int i=0;i<n;i++) {
               cin >> a[i] ;
             }

             sort(all(a)) ;
             a.erase(unique(all(a)),a.end()) ;

             int z = a.size() ;

             vector<int > pref(z) , suf(z) ;

             //output(a) ;

             if(z ==1){

                 cout << a[0]*2 << nl; 
                 return ;
             }

             pref[0] = a[0] ;

             for(int i=1 ;i<z;i++){

                 pref[i] = __gcd(pref[i-1] , a[i]) ;
             }

               
             suf[z-1] = a[z-1] ;

             for(int i=z-2 ;i>=0;i--){ 

                suf[i] = __gcd(suf[i+1] , a[i]) ;
            }
  
            int ans = 0 ;
            int gc = 0 ;

            for(int i=0;i<z;i++){

                 if(i==0) gc = suf[i+1] ;
                 else if(i==z-1) gc = pref[i-1] ;
                 else gc = __gcd(pref[i-1],suf[i+1]) ;

                 int sum = gc + a[i] ;
                 ans = max(ans, sum) ;
            }


            cout << ans << nl;



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
