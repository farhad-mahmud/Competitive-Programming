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
const int  MOD = 1e9 + 7;

// # sum of all pair of sum ....
// for element a1 , a2 ,a3 ; for length 3 
// without bruteforce = ans = a1* 6 + a2 *6 + a3* 6 ;

// now for n length array = contribution of a[i] = a[i] * 2 * n ;
void solve ()
{
              int n ; cin >> n;
              vector<int >a(n) ;

              for(int i=1;i<=n;i++){

                      cin >> a[i] ;
              }

             int ans = 0 ;       
            
            for(int i=1;i<=n;i++){

                   ans += 2* n * a[i] ;  // boom O(logn) ;

                 //  ans *= pow(a[i], 2*n)   , for product of all pair product
            }

              cout << ans << endl;

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
