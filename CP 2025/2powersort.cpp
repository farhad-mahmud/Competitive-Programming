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
// BREAK THE PROBLEM
// SOLVE THE SUB-PROBLEMS FIRST

void solve ()
{  
            int n,k ; cin >> n >> k ;

            vector<int > a(n); for(int i=0;i<n;i++)cin >> a[i];

            int cnt = 0 ;

            int ans = 0 ;
            for(int i=0;i<n-1;i++){
              // cerr << a[i] << ' ' << 2*a[i+1] << nl;
                  if(a[i] < 2*(a[i+1])){
                      cnt++;
                  }
                  else{
                     if(cnt>=k){
                      ans+= (cnt-k)+ 1;
                     }
                      cnt= 0 ;    
                  }

                  //cerr << a[i] << nl;
             } 

         // if(k==1){
         //    if(a[n-2] < 2*(a[n-1])){
         //          ans++ ;
         //    }
         // }
            
            //cerr << cnt << nl;
            if(cnt >=k){
                 ans+= (cnt - k)+ 1;
            }
          
          cout << ans << nl ;

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
