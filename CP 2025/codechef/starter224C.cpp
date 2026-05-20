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

void solve() {
    int n;
    int k;
    cin >> n >> k;

    vector<int> P(n);
    for(int i = 0; i < n; i++) cin >> P[i];

    int trades = 0;
    int start = P[0]; 

    for(int i = 1; i < n; i++) {
        if(P[i] - start > k) {
         
            trades++;
            start = P[i]; 
        }
        else if(start - P[i] > k) {
         
            trades++;
            start = P[i]; 
        }
        
    }

    cout << trades << nl; 
    
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
