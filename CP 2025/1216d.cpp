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

const int N = 1e6+ 9;
const int MOD = 1e9 + 7;

void solve ()
{  

         int n ; cin >> n ;
         vector<int> a(n);for(int i=0;i<n;i++)cin >> a[i] ;

         sort(all(a));

         int x = 0 ;

         for(int i=0;i<n;i++){
             x = __gcd(x,(a[n-1] - a[i])) ;
         }

         vector<int > allz ;
         //cerr << x << nl ;
         for(int i=1;i*i<=x;i++){
              if(x % i == 0){
                   allz.push_back(i);
                   if(x/i != i){
                       allz.push_back(x/i) ;
                   }
              }
         }

         output(allz) ;

         int ans_z = 0 , ans_y = 1e18 ;
         // have to minimise y..
         for(auto z : allz){
            int x = a[n-1] ;
            int cur_y = 0 ;
             for(int i=0;i<n;i++){
                 if((x - a[i]) % z == 0){
                      cur_y+= (x-a[i])/z ;
                 }
             }

             if(cur_y < ans_y){
                 ans_y = cur_y ;
                 ans_z = z ;
             }
         }


         cout << ans_y << ' ' << ans_z << nl ;

        
         
}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;

   // cin >> t ;

   while (t--) {

      solve() ;

   }


   return 0;
}
