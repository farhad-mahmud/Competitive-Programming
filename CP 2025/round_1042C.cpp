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
// Constants
const int N = 1e5 + 9;
const int MOD = 1e9 + 7;


void solve ()
{ 
          int n , k ; cin >> n >> k ;

          vector<int > s(n+1) , t(n+1) ;

          for(int i=1;i<=n;i++) cin >> s[i] ;


          for(int i=1;i<=n;i++) cin >> t[i] ;

           
          multiset<int > dif_k ;

          for(auto : s){

                dif_k.insert(abs(a-k)) ;
          }

          bool ok = true ;

          for(auto b : t){

                bool m = false ;

                
          }


}

int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

         cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
