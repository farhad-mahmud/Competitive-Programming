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

int lcm(int a, int b) { return (a / __gcd(a, b)) * b; }

void solve ()
{  
         int n; cin >> n ;
         vector<int > a(n); for(int i=0;i<n;i++)cin >> a[i];

         vector<int > b(n); for(int i=0;i<n;i++)cin >> b[i];

         
         int cnt = 0;
         if(__gcd(a[0],a[1])!= a[0]){
              cnt++ ;
         }
         if(__gcd(a[n-2], a[n-1]) != a[n-1]){
              cnt++;
         }

         for(int i=1;i<n-1;i++){
              int x = __gcd(a[i-1],a[i]);
              int y = __gcd(a[i+1] ,a[i]);

              int l = lcm(x,y);
              if(l < a[i]){
                cnt++ ;
              }
         }

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
