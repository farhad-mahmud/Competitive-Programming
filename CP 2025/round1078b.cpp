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
         int n ,x,y; cin >> n >> x >> y ;

         vector<int > a(n); for(int i=0;i<n;i++)cin >> a[i] ;


         vector<int > div(n); 

         for(int i=0;i<n;i++){
              int d = a[i]/ x ;
              int z = d*y ;
              div[i] = z ;
         }

         vector<int > pref(n);

         pref[0] = div[0] ;

         for(int i=1;i<n;i++){
             pref[i] = pref[i-1] + div[i] ;
         }


         vector<int > suf(n);

         suf[n-1] = div[n-1];

         for(int i =n-2 ;i>=0;i--){

             suf[i] = suf[i+1] + div[i] ;
         }

         int mx = 0 ;

         for(int i=0;i<n;i++){
            int cur = 0 ;
              if(i==0){
                  cur = suf[1] ;
              }
              else if(i==n-1){
                  cur = pref[n-2] ;
              }
              else {
                 cur = pref[i-1]+ suf[i+1] ;
              }
              //cerr << cur << ' ' << a[i] << nl;
              cur+= a[i] ;
              //cerr << cur << nl; 
              mx = max(mx, cur) ;
         }

         cout << mx << nl; 
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
