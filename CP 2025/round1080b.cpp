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
      int n ; cin >> n;  
      vector<int > a(n+1); for(int i=1;i<=n;i++)cin >> a[i] ;

      int k = n / 2;
      vector<bool> hash(n + 1, false);  

   for(int i = 1; i <= k; i++) {
      if(hash[i]) continue;     

       if(a[i] != i) {
        int j = i;
        bool f = false;

        while(j <= n) {
            // hash[j] = true;     

            if(a[j] == i) {
                f = true;  
                swap(a[i],a[j]) ;
                break;
            }
            j = 2*j;
        }

        if(!f){
            no;
            return;
          }
         } else {

           hash[i] = true;         
       }


      }

      for(int i = k+1; i <= n; i++) {
      if(!hash[i] && a[i] != i) {  
        no;
        return;
       }
      }

      yes;


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
