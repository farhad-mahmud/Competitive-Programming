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
         int n ;cin >> n ;
         vector<int > a(n); for(int i=0;i<n;i++)cin >> a[i];
         sort(a.begin(),a.end());
         a.erase(unique(a.begin(),a.end()),a.end());

         int prev = a[0] ;
         int cnt = 1 ;
         //output(a);
        // cerr << prev << nl ;
         int sz = size(a);
         if(sz == 1){
              cout << 1 << nl ;
              return ;
         }
         else if(sz == 2){
              if(a[0]+1 == a[1]){
                  cout << 2 << nl ;
                  return ;
              }
         }
         int mx = 1 ;
         for(int i=1;i<sz;i++){
             //cerr << "a[i] " << a[i] << ' ' << prev+1 << nl ;
               if(a[i] != prev+1){ 
                     cnt = 1 ;
                     prev= a[i] ;
               }
               else {
                     cnt++;
                     prev+= 1;
               }
               //cerr << "h" << nl ;
               mx = max(mx ,cnt) ;
         }

         cout << mx << nl ;
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
