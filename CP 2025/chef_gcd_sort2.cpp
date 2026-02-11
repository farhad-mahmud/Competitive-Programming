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

const int N = 1e6 + 9;
const int MOD = 1e9 + 7;


void solve ()
{  
    int n; cin >> n;
    vector<int> a(n); for(int i=0;i<n;i++)cin >> a[i];

    int prev = a[0] ;

    bool f = true ;
    for(int i=1;i<n;i++){
         int gc = __gcd(prev,a[i]);

         if(prev > a[i]){
             if(prev > gc){
                  f = false ;
                  break;
             }
             else{
                 a[i] = gc ;
                 // prev = gc ;
             }
         }
         else {
            // note, here prev = a[i], a[i] = a[i+1]
            //even if ai+1 is bigger then ai ,
            // we will try to reduce ai+1 ,,with gc , for
            // future ai+2 ..
             if(gc < a[i] && gc >= prev){
                  a[i] = gc ;
             }
         }
        prev = a[i] ;
    }

    if(f){
         yes ;
    }
    else {
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
