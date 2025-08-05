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
                int n , s ; cin >> n >> s ;

                vector<int > a(n+1) ;

                for(int i=1;i<=n;i++) {
                  cin >> a[i] ;
                }

                int cnt1 = count(all(a),1) ;
                int cnt2 = count(all(a),2) ;

                int sum = cnt1 + 2*cnt2 ;

                bool f = false ;

                if(sum > s || s- sum == 1) f = true ;

                if(f){ 

                   for(int i=1 ;i<=(n-cnt1-cnt2);i++) cout << 0 << ' ' ;
                   for(int i=1 ;i<=cnt2;i++) cout << 2 << ' ' ;
                   for(int i=1;i<=cnt1;i++) cout << 1 << ' ' ;                   
                   cout << nl; 
                }
                else{

                        cout << -1 <<nl ;
                }
              
             // cout << nl ;
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
