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

const int N = 1e6 + 9;
const int MOD = 1e9 + 7;


void solve ()
{  
    int n; cin >> n;
    vector<int> a(n); for(int i=0;i<n;i++)cin >> a[i];

    vector<int > gcd(N+2,0), freq(N+2,0) ;

    for(auto x : a){
        freq[x]++ ;
    }

    for(int i=1;i<N;i++){
       for(int j=i;j<N;j+=i){
           gcd[i] += freq[j] ;
       }
    }

    for(int i=1;i<N;i++){
        gcd[i] = (gcd[i]*(gcd[i]-1))/ 2;
    }

    for(int i=N-1;i>=1;i--){
        for(int j=i+i;j<N;j+=i){
            gcd[i] -= gcd[j] ;
        }
    }

    int i = 1 ;
    for(auto x : gcd){
         cout << "pairs with gcd " << i << ' ' << x << nl;
        i++ ; 
    }

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
