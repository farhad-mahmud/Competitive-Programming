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

       vector<int > a(n);for(int i=0;i<n;i++)cin >> a[i];

       int mx = n ;
       int l = 0 ;

       for(int i=0;i<n;i++){ 
             if(mx == a[i]){
                  mx-- ;
             }
             else if(mx != a[i]){
                  l = i ;
                  break ;
             }
        }


        if(l == -1){
        for(int x : a) cout << x << " ";
        cout << nl;
        return;
       }

      int r = -1;
    for(int i = l; i < n; i++){
        if(a[i] == mx){
            r = i;
            break;
        }
     }

       reverse(a.begin() + l, a.begin() + r + 1);

       for(auto i : a){
            cout << i << ' ' ;
       }

       cout <<nl ;

       
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
