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

const int N = 100 ;
const int MOD = 1e9 + 7;


void solve ()
{  

            int n ; cin >> n ;
            vector<int > a(n) ; for(int i=0;i<n;i++)cin >> a[i];


            int l = 0 ;

            int pr = 0 ;


            int right = n-1 ;
            int ans = 0 ;
            for(int l=n-2;l>=0;l--){

                  int dif = 0 ;
                  if(a[l] > a[right]){
                        right = l ;

                  }
                  else {
                       dif = a[right] - a[l] ;

                  }

                  ans = max(ans , dif) ;

            }
            

            cout << ans << nl;
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
