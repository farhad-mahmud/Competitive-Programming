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

int n ;
vector<pair<int,int >> v ;
bool f(int x){
      int mx_left = 0 ;
      int mx_right = 0 ;
     for(auto [l,r] : v){  
          mx_left = mx_left - x ;
          mx_right = mx_right + x ;
          mx_left = max(mx_left,l);
          mx_right = min(mx_right , r);
      
         if(mx_left > mx_right){
              return false ;
         }
     }

     return true ;

}
void solve ()
{           
          cin >>n;
         v.clear();
         for(int i=0;i<n;i++){
              int l,r; cin >> l >> r ;
              v.push_back({l,r});
         }


         int l = -1  ,r  = 1e9 ;


         while(r- l >1){
              int mid = (l+r)/2 ;

              if(f(mid)){
                 r = mid ;
              }
              else {
                 l = mid ;
              }
         }

         cout << r << nl ;
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
