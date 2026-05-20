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
         int a[100];

         vector<int > b ;
         for(int i=1;i<=7;i++){
               cin >> a[i];
               b.push_back(a[i]);
         }

         sort(all(b));

         int sum = 0;

         int sz = b.size();
         for(int i=0;i<sz-1;i++){
                  b[i] = (-1*b[i]);

                  sum+= b[i];
         }

         cout << sum + b[sz-1] << nl;

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
