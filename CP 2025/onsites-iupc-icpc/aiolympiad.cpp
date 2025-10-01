#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)


#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
#define vi       vector<int > 
#define  forr    for(auto &i : x) 
const int  N = 1e5 + 7;

int n, a[N];



void solve ()
{
         

          cin >> n;

         for(int i=0;i<n;i++){

               cin >> a[i] ;
         }
         int ans = INT_MAX;
         for(int i = 0; i < (1<<n); i++) {
            int sumA = 0, sumB = 0;
            for(int j = 0; j < n; j++) {
               if(i & (1<<j)) {
                  sumB += a[j];
               } else {
                  sumA += a[j];
               }
            }
            ans = min (ans, abs(sumB - sumA));

         }
        cout<<ans<<'\n';
}


 // remember this 

// optimise loop uses via implementing number theory / algorithm
// optimise array elements calculation via number theory / algorithm

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
