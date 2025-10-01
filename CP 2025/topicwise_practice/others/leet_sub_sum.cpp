#include <bits/stdc++.h>
using namespace std;

#define ll  long long

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

            vector<int > nums(n);

           vector<int > pref_sum(n) ;

           for(int i=0;i<n;i++) cin >> nums[i] ;

      
           pref_sum[0] = ((nums[0] % k)+ k) % k ;

           for(int i=1;i<n;i++){

                pref_sum[i] = (pref_sum[i-1] + nums[i] ) % k ;

                pref_sum[i] = (pref_sum[i]+k) % k ;
           }


           map<int ,int > mp ;

           mp[0]++ ;

           int ans = 0 ;

           for(int j=0;j<n;j++){

                ans += mp[pref_sum[j]] ;

                mp[pref_sum[j]]++ ;
           }

           cout << ans << nl; 
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
