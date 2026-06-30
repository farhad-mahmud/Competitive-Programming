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

const int N = 1e6 + 5 ;

const int MOD = 1e9 + 7;

void solve ()
{  
          int n;  cin >> n ;

          vector<int > a(n); for(int i=0;i<n;i++)cin >> a[i] ;

          vector<int > b(n); for(int i=0;i<n;i++)cin >> b[i] ;

          int c = 0 ;

          for(int i=n-1 ;i>=0 ;i--){
               int cur = a[i] + c ;

               if(cur > b[i]){
                    c = cur - b[i] ;
               }
               else{
                    c = 0 ;
               }
          }

          if(c == 0){
             yes ;
          }
          else{
             no ;
          }
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
