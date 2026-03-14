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

         int a[n][n];

         map<int,int > mp;
         for(int i=0;i<n;i++){
              for(int j=0;j<n;j++){
                  cin >> a[i][j];
                  mp[a[i][j]]++;
              }
         }

         int mx = (n*n) - n; 
       
         bool ok = true;

         for(auto [x,f]: mp){
               if(f > mx){
               ok = false;
               break;
                }
         }

         if(ok) yes
          else no



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
