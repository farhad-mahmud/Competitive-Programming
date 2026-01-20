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
         int n,m,k ; cin >> n >> m >> k ;
         vector<int > robot(n);for(int i=0;i<n;i++)cin >> robot[i];
         vector<int > spike(m);for(int i=0;i<m;i++)cin>> spike[i];

         sort(all(spike));

         map<int,vector<int>> mp ;
         vector<bool > vis(n,false);

         for(int i=0;i<n;i++){

           auto it = lower_bound(spike.begin(), spike.end(), robot[i]);

         // left spike
          if (it != spike.begin()) {
          int left = robot[i] - *(it - 1);
          mp[-left].push_back(i) ;
         }

         // right spike
         if (it != spike.end()) {
         int right = *it - robot[i];
         mp[right].push_back(i) ;
         }
 
         }

         int val = 0 ;
         int alive = n ;
         string s; cin >> s;

         for(int i=0;i<k;i++){
              if(s[i] == 'L'){
                   val -= 1 ;
              }
              else {
                   val += 1 ;
              }

              for(auto x : mp[val]){
                   if(vis[x] == true)continue ;

                   vis[x] = true ;
                   alive--;
              }
              mp[val].clear();
              cout << alive << ' ' ;
         }

         cout << nl ;




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
