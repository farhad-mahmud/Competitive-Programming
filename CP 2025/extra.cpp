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
        int x; cin >> x ;

        vector<int > v ;

        if(x <10){
            cout << 0 << nl;
            return ;
        }
        while(x > 10){
             int rem = x % 10 ;

             x/=10 ;

             v.push_back(rem);
        }
        //cerr << x << nl;

        sort(all(v));
        //output(v);


        // first element 1 banaia count..

        int sum2 = 1;
        int cnt2 = 0 ;

        if(x > 1){
             cnt2++ ; 
        }
        for(auto i : v){
              sum2+= i ;
              if(sum2 >= 10){
                 break ;
              }
              cnt2++ ;
        }


        cerr << cnt2 << nl;

         int ans2 = (v.size() + 1 ) - (cnt2) ;
        // cerr << ans2 << nl;
        
        cout << ans2 << nl; 

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
