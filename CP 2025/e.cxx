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
