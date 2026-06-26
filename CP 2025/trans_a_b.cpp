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

const int INF = 1e18;

int a, b; 
vector<int > ans ;

bool f(int cur) {
    if(cur > b) return false ;

    if(cur == b){
         ans.push_back(cur) ;
         return true ;
    } 

    ans.push_back(cur) ;

    if(f(cur*2)) return true ;
    if(f(cur*10 + 1)) return true ;
    ans.pop_back() ;

    return false  ;
}

void solve ()
{  
        cin >> a >> b ;
        

        if(f(a)){
             cout << "YES" << nl; 
             cout << ans.size() << nl ;

             for(auto x : ans){
                 cout << x << ' ' ;
             }

             cout << nl ;
        }

        else {
            cout << "NO" << nl; 
        }
       

}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);
   int t = 1 ;
   while (t--) {
      solve() ;
   }
   return 0;
}