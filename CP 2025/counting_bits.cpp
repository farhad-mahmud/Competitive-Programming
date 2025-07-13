#include <bits/stdc++.h>
using namespace std;

#define int  long long

#define nl       "\n" 

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
// Constants
const int N = 1e5 + 9;
const int MOD = 1e9 + 7;

int count_on_bits(int n){

  int cnt = 0;

    for (int i = 0; (1LL << i) <= n; i++) { // loop through 0 to 2^i bits ;

        int full_cycle = (n + 1) / (1LL << (i + 1));

        int rem = (n + 1) % (1LL << (i + 1));

        cnt += full_cycle * (1LL << i);

        cnt += max(0LL, rem - (1LL << i));
    }
    return cnt;
}
void solve ()
{
                 
               int n ; cin >> n;
               int cnt = 0 ;

               cout << count_on_bits(n) << nl; 
   
}

int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

        // cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
