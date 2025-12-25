//---  Bismillahir Rahmanir Rahim ---//

//------------------------------//
//        Author: Farhad       //
//------------------------------//

#include <bits/stdc++.h>
using namespace std;

#define nl       "\n"

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define all(x)   x.begin(),x.end()
#define allr(x)  x.rbegin() ,x.rend()
#define dbug(x) cerr << (#x) << " is " << (x) << nl;
#define output(a) for(auto &it: a) cerr<<it<<" "; cerr<<nl;

// constrains

const int N = 5e6 + 9;
const int MOD = 1e9 + 7;
int spf[N] ;
unsigned long long  pref[N] ;

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

    for (int i = 2; i < N; i++) {
        spf[i] = i;
    }
    for (int i = 2; i < N; i++) {
        if (spf[i] == i) {
            for (int j = i; j < N; j += i) {
                spf[j] = min(spf[j], i);
            }
        }
    }

    for(int i=1;i <N;i++){
        int phi_of_i = 1  ;
        int x = i ;
        while(x > 1){
            int p = spf[x] , pw = 1, ex = 0 ;

            while(x % p ==0){
               ex++ ;
               pw *= p ;
               x = x/p ;
            }
            // pw^e = pw ..  
            phi_of_i *=  (pw/p)* (p-1) ; 
        }
         pref[i] = pref[i-1] + 1LL * phi_of_i * phi_of_i ;
    }
  

    //cerr << pref[N-1] << nl; 
    int q ; cin >> q ; 
    int t = 0 ;
    while(q--){
        int a , b ; cin >> a >> b ;

        cout <<  "Case " << ++t << ": " <<  pref[b] - pref[a-1] << nl ;
    }

   return 0;
}
