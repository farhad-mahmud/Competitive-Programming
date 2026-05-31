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
         int n , k ; cin >> n >> k ;

         vector<int > a(n+1); for(int i=1;i<=n;i++)cin >> a[i] ;


         map<int,int > mp ;

         int l = 0 ;

         for(int i=1;i<=k;i++){
               mp[a[i]]++ ;

               while(mp[a[i]] > 1){
                    mp[a[l]]-- ;
                    l++ ;
               }
         }



         vector<int > ans ;

         ans.push_back(mp.size()) ;

          l =k ;

         for(int i=k+1;i<=n;i++){
              mp[a[i]]++ ;

              while(mp[a[i]] > 1){
                    mp[a[l]]--;
                    l++ ;
              }


              ans.push_back(mp.size()) ;
         }


         output(ans) ;
  
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
