//---  Bismillahir Rahmanir Rahim ---//

//------------------------------//
//        Author: Farhad       //
//------------------------------//

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
int phi(int n) {
      int result = n;
    for (int p = 2; p * p <=n; p++){
        if (n % p == 0) {
           
            while (n % p == 0)
                n /= p;
            result -= result / p;
        }
    }

    if (n > 1)
        result -= result / n;


    return result;
}

vector<int > pref ;

void pre() {
    pref.resize(N + 1);
    pref[0] = 0;

    for (int i = 1; i <= N; i++) {
        int val = phi(i);
        pref[i] = pref[i - 1] + val * val;
    }
}

void solve (int k )
{
         int a , b ; cin >> a >> b ;

         int ans = pref[b] - pref[a-1] ;

         cout << "Case " << k << ": " <<   ans << nl; 
}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;

    cin >> t ;
    int k = 1 ;
    pre() ;
   while (t--) {

      solve(k) ;
      k++ ;
   }


   return 0;
}
