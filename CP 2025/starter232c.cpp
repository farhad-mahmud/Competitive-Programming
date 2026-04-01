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
         int n, q;  cin >> n >> q ;

         vector<int > a(n); for(int i=0;i<n;i++)cin >> a[i];

         sort(all(a));
          a.erase(unique(all(a)), a.end());

         int m = a.size();
          vector<int> gap;
          for(int i = 1; i < m; i++){
             gap.push_back(a[i] - a[i-1]);
         }

         //if gap[i] <=x ,, range merges..

         sort(all(gap));
        // output(gap);
          vector<int> pref(m, 0);
       for(int i = 0; i < gap.size(); i++){
          pref[i+1] = pref[i] + gap[i];
       }

         while(q--){
                  int x; cin >> x ;
                  int k = upper_bound(all(gap) ,x) - gap.begin();
                  // sum1 is elements.. with gap[i] <=x ..
                  //they contribute ..min(gap,x) = gap..
                  int sum1 = pref[k];
                  int sum2 = (gap.size() - k)*x ;

                  int ans = x+ sum1 + sum2 ;

                  cout << ans << nl;
         }

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
