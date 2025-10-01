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


void solve (int k)
{
               
               int n ; cin >> n ;

               vector<int > a(n+1) ;

               map <int ,int> mp ;

              for(int i=1;i<=n;i++){

                   cin >> a[i] ;

                   mp[a[i]]++ ;
              }


               
             if(mp.size() < 2){

                 cout << -1 << nl;
             }
             else {

                  cout << 2 << nl;
             }
 
}

int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

         cin >> t ;

         int k = 1 ;

         while(t--){

            solve(k) ;
            k--;
        }


    return 0;
}
