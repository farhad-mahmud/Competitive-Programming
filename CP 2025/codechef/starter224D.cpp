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
     int b, g ,min_b_lagbe,min_g_lagbe,n ; 
       cin >> b >> g >> min_b_lagbe >> min_g_lagbe >> n ;

       int sum_min_lagbe = min_g_lagbe + min_b_lagbe;

       if(sum_min_lagbe > n){
           cout << -1 << nl;
           return ;
       }


     int total_rooms = (b+g +n-1)/n ;
     int boys = b/min_b_lagbe ;
     int girls = g/min_g_lagbe ;
     int mn = min(boys,girls);
     if(total_rooms <= mn){
          cout << total_rooms << nl;
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
