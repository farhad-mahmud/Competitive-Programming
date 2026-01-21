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
         int n ; cin >> n ;
         vector<int > a(n);for(int i=0;i<n;i++)cin >> a[i] ;

         vector<int > pref_max(n) ;

         pref_max[0] = a[0] ;

         for(int i=1;i<n;i++){
              pref_max[i] = max(pref_max[i-1] , a[i]) ;
         }

       // for(int i=0;i<n;i++){
       //       cout << pref_max[i] << ' ' ;
       // }

         set <int > st ;
         // cout << nl ;

        for(int i=0;i<n;i++){
              st.insert(pref_max[i]) ;
         }
         vector<int > ans ;
      
      for (int j = 1; j <= n; j++) {
         if (st.find(j) == st.end()) {
        ans.push_back(j);
        }
    }

      // for(auto i : ans){
      //      cout << i << nl; 
      // }  

      int sz = ans.size();
      sort(ans.begin(),ans.end());

     if (ans.empty()) {
       cout << 0 << nl;   // or whatever the problem expects
        return;
    }

     cout << ans.back() << nl;


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
