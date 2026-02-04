//---  Bismillahir Rahmanir Rahim ---//

#include <bits/stdc++.h>
using namespace std;

#define ll  long long

#define nl       "\n"

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define all(x)   x.begin(),x.end()
#define allr(x)  x.rbegin() ,x.rend()
#define dbug(x) cerr << (#x) << " is " << nl;
#define output(a) for(auto &it: a) cerr<<it<<" "; cerr<<nl;

// constrains

const int N = 1e5 + 9;
const int MOD = 1e9 + 7;


void solve ()
{  
       int b, g ,min_b_lagbe,min_g_lagbe,mx_person_room ; 
       cin >> b >> g >> min_b_lagbe >> min_g_lagbe >> mx_person_room ;

       int sum_min_lagbe = min_g_lagbe + min_b_lagbe;

       if(sum_min_lagbe > mx_person_room){
           cout << -1 << nl;
           return ;
       }

       int mx = max(min_g_lagbe, min_b_lagbe);

       int baki_boy= 0 , baki_girl = 0 ;
       int boy_mx = 0 ;int girl_mx = 0 ;

       if(mx == min_b_lagbe){
           boy_mx = mx ;
           baki_girl = mx_person_room- mx ;
       }
       else {
           girl_mx = mx;
           baki_boy = mx_person_room - mx ;
       }

       int min_rooms_for_boys = (b + (mx_person_room - min_g_lagbe) - 1) / (mx_person_room - min_g_lagbe);
       int min_rooms_for_girls = (g + (mx_person_room - min_b_lagbe) - 1) / (mx_person_room - min_b_lagbe);

       int ans = max(min_rooms_for_boys, min_rooms_for_girls);

       cout << ans << nl;
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