//---  Bismillahir Rahmanir Rahim ---//


#include <bits/stdc++.h>
using namespace std;

#define ll  long long

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
   int n; cin >> n;
   int arr[n][n-1];
   for(int i= 0; i <n; i++) {
      for(int j = 0; j < n-1; j++) {
         cin >> arr[i][j];
      }
   }
   vector<int> vis(n+1, 0), p(n+1, -2);

   for(int i = 0; i < n-1; i++) {//---  Bismillahir Rahmanir Rahim ---//


#include <bits/stdc++.h>
using namespace std;

#define ll  long long

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
   int n; cin >> n;
   vector<int> vi(n);
   for(int &x : vi) cin >> x;

   map<int, int> mp;
   for(int x : vi) mp[x]++;

   //mp[0]++;

   sort(all(vi));

   int curr = 0, cnt = 0;
   bool emni = false;
   int op = 1;
   for(int i : vi) {
      //int curr = -1;
      if((mp.find(i-1) == mp.end() or mp[i-1] > mp[i]) and i != vi[0]) {
         cout << curr << "d ";
         cnt += curr, curr = mp[i];
         if(op == n) emni = true;
      }
      else {
         //curr = mp[x];
         curr = max(mp[i], curr);
         cout << curr << ' ';
      }
      op++;
   }

   //cout << curr <<' ';
   if(!emni) cnt += curr;

   cout << cnt << nl;
      
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

      vis[arr[0][i]] = 1; p[arr[0][i]] = i+1;
   }
     
   int miss;
   for(int i = 1; i <= n; i++) {
      if(vis[i] == 0) {
         miss = i;
         break;
      }
   }

   //cout << miss << nl;
   int pos = -2;

   for(int i = 1; i < n; i++) {
      int curr = -2;
      for(int j = 1; j < n-1; j++) {
         if(arr[i][j] == miss){
            curr = p[arr[i][j-1]];
            pos = max(curr, pos);
         }
      }
   }
   vector<int> vi(n);
   if(pos == -2) cout << miss << ' ';
   for(int i = 1; i < n; i++) {
      cout << arr[0][i-1] << ' ';
      if(i == pos) cout << miss <<' ';
      //cout << arr[0][i-1] << ' ';
   }
   cout << nl;

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
