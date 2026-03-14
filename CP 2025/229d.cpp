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
      vector<int > a(n); for(int i=0;i<n;i++)cin >> a[i];

      vector<int > c = a ;

      sort(all(a));

      int x = a[0];
      int y = a[n-1] + a[n-2];

      if(x==y){
           cout << -1 << nl;
      }
      else{ 
               int in = -1, in2 = -1, in3 = -1;

               vector<bool > hash(n,false);
              for(int i=0;i<n;i++){
                   if(c[i] == x){
                        in = i+1 ;
                        hash[i] = true ;
                        break ;
                   }
              }

              for(int i=0;i<n;i++){
                   if(!hash[i] && c[i] == a[n-2]){
                       in2 = i+1 ;
                       hash[i] = 
                       break ;
                   }
              }

              for(int i=0;i<n;i++){
                   if(!hash[i] && c[i] == a[n-1]){
                           hash[i] = true ;
                           in3 = i+1 ;
                           break ;
                   }
              }

             cout << in2 << ' ' << in3 << ' ' << in  << nl; 
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
