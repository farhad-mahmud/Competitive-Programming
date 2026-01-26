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
// int spf[N];
// void sieve(){
//       for(int i=2;i<N;i++){
//             spf[i] = i ;
//       }

//       for(int i=2;i<N;i++){
//             if(spf[i] == i){
//         for(int j=i;j<N;j+=i){
//               spf[j] = min(spf[j],i) ;
//         }
//             }
//       }

// }
// vector<vector<pair<int,int>>> v(N + 1);

// void all_fact() {
//     for (int i = 1; i <N; i++) {
//         int x = i;
//         while (x > 1) {
//             int p = spf[x], cnt = 0;
//             while (x % p == 0) {
//                 x /= p;
//                 cnt++;
//             }
//             v[i].push_back({p, cnt});
//         }
//     }
//     v[1].push_back({1,1});
// }


void solve ()
{        

      //cerr << spf[2] << nl ;
      int n ;cin >> n ;
      vector<int > a(n+1); for(int i=1;i<=n;i++)cin >>a[i];

      int mx = *max_element(a.begin(),a.end());

      vector<bool > mark(mx+1,false);
      for(int i=0;i<n;i++){
           mark[a[i]] = true ;
      }  

      // vector<int > hash(n+1,0);
      // for(int i=1;i<=n;i++){
      //      hash[a[i]]++ ;
      // }


     vector<vector<int>> div(n + 1);

      for(int i = 1; i <= n; i++){
      for(int j = 1; j * j <= i; j++){
        if(i % j == 0){
         cerr << i << ' ' << j << nl ;
            if(j!= 1)div[i].push_back(j);
            if(i / j !=j){
                div[i].push_back(i / j);
            }
        }
          }
      }

      for(int i=1;i<=n;i++){
            sort(div[i].rbegin(), div[i].rend()) ;
      }
      for(int i=1;i<=n;i++){
           for(auto x : div[i]){
                  cout << x << ' ' ;
           }
           cout << nl ;
      }


}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;
   // sieve() ;
   // all_fact();
   cin >> t ;

   while (t--) {

      solve() ;

   }


   return 0;
}
