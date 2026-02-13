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
      vector<int> p(n); for(int i=0;i<n;i++)cin >> p[i];
      vector<int > a(n); for(int i=0;i<n;i++)cin>> a[i] ;
        
      for(int i=0;i<n;i++){
           if(a[i] > n){
                 no;
                 return ;
           }
      } 

      int i=0,j = 0 ;

      int cnt = 0 ;
      while(i <n && j <n){
           if(p[i] == a[j]){
               j++ ;
               cnt++ ;
           }
           else{
               i++ ;
           }
      }

      //cerr << cnt << nl ;
      if(cnt == n){
           yes;
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
