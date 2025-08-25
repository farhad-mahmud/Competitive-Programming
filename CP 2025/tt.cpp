#include <bits/stdc++.h>
using namespace std;

#define ll  long long

#define nl       "\n" 

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define pii pair<int,int>
#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
#define dbug(x) cerr << (#x) << " is " << (x) << nl;
#define output(a) for(auto &it: a) cerr<<it<<" "; cerr<<nl;
// Constants
const int N = 1e5 + 9;
const int MOD = 1e9 + 7;

int get_mex(const vector<int>& a) {

    int n = a.size();
    vector<bool> present(n + 5, false); // +5 for safety margin

    for (int x : a) {
        if (x < n + 5) {
            present[x] = true;
        }
    }

    for (int i = 1; i < n + 5; ++i) {
        if (!present[i]) return i;
    }

}



void solve ()
{  
                int n , m ; cin >> n >> m; 

                vector<int > a(n) ;

                for(int i=0;i<n;i++) cin >> a[i] ;


                int mex = get_mex(a) ;

              cout << mex << nl; ;
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
