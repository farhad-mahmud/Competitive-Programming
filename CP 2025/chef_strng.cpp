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
         int n ; cin >> n ;

         vector<int > a(n) ;

         for(int i=0;i<n;i++) cin >> a[i] ;
         
         //sort(all(a)) ;
        // a.erase(unique(all(a)),a.end()) ;

         //n = a.size() ;

         vector<int > pref(n) , suf(n) ;

         pref[0] = a[0] ;

         suf[n-1] = a[n-1] ;

        // output(a) ;

         for(int i=1;i<n;i++){

              pref[i] = __gcd(pref[i-1],a[i]) ;
         }

         for(int i=n-2 ;i>=0;i--){

              suf[i] = __gcd(suf[i+1],a[i]) ;
         }

         int ans =0 , gc = 0 ;

         int cnt = 0 ;

         for(int i=0;i<n;i++){
             int gc = 0 ;

             if(i ==0) gc = suf[i+1]; 
             else if(i == n-1) gc = pref[i-1] ;
             else gc = __gcd(pref[i-1],suf[i+1]) ;
            
             if(gc > 1){
                 cnt++ ;
             }

             //cout << gc << nl; 
         }

         cout << cnt << nl; 

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
