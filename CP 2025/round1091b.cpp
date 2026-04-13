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

const int N = 1e9 + 9;
const int MOD = 1e9 + 7;


void solve ()
{  
            int n,k ; cin >> n >> k ;

            vector<int > a(n+1); for(int i=1;i<=n;i++)cin >> a[i];

            vector<int > p(k+1); for(int i=1;i<=k;i++)cin >> p[i];

            int pp = p[1];

            int cnt1  = 0 ;
            if(a[pp] == 1) cnt1++ ;
           
           for(int i=pp-1;i>=1;i--){
               if(a[i] != a[i+1]) cnt1++ ;
           }

           int cnt2 = 0 ;
           if(a[pp] == 1) cnt2++ ;

           for(int i=pp+1;i<=n ;i++){
              if(a[i] != a[i-1])cnt2++ ;
           }


           cout << max(cnt1,cnt2) << nl;

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
