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


void solve ()
{
                int n ; cin >> n;

                int ans = 0;
                for(int i=1 ;i<=n;i++){ 
                      
                   int x ; cin >> x;

                   for(int k=0;k<30 ;k++){

                        if(x >> k & 1){    // see if the kth bit of x is on/off

                             cnt[k]++ ;         // store it 
                        }
                   }

               }
              
              for(int k=0;k<30 ;k++){
                    
                      ans += cnt[k] * (1 <<k) ; // 2^k 

              }
}


int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

       //  cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
