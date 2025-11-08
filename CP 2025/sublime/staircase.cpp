//---  Bismillahir Rahmanir Rahim ---//

//------------------------------//
//        Author: Farhad       //
//------------------------------//

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

int a[N] ;

void solve ()
{
   int n ; cin >> n ;
   vector<int > a(n);
   for (int i = 0; i < n; i++)cin >> a[i] ;

   vector<int > vis(n + 1, 0) , dis(n + 1, 0) ;
   queue<int> q ;
   q.push(0);
   dis[0] = 0 ;
   vis[0] = 1 ;

   while (!q.empty()) {
      int u = q.front();
      q.pop();
      int v = u + 1 ;
      if (v >= 0 && v <= n && !vis[v]) {
         vis[v] = 1 ;
         dis[v] = dis[u] + 1 ;
         q.push(v);

      }
      v = u + a[u] ;
      if (v >= 0 && v <= n && !vis[v]) {

         vis[v] = 1 ;
         dis[v] = dis[u] + 1 ;
         q.push(v) ;
      }
   }

   cout << dis[n] << nl;




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
