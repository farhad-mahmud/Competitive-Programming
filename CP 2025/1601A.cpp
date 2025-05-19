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

// 
void solve ()
{
                  int n ; cin >> n ;

                  vector<int >cnt(30,0) ;

                  int a[n+1] ;
                 
                  for(int i=0;i<n;i++){ 
                      
                           cin >> a[i] ;

                           // 1 counts of every bit 

                      for(int j =0 ;j<30 ;j++){

                             if(a[i] >> j & 1){  // checking if jth bit of a[i] is on or off ;

                                  cnt[j]++ ;  // on means 1, then cnt++ ;
                             }
                      }
                  }

                  for(int k= 1 ;k<=n;k++){

                       bool ok = true ;
                     for(int j=0 ;j<30 ;j++){

                           if(cnt[j] % k !=0){

                                ok = false ;
                           }
                     }
                     if(ok) cout << k << ' ' ;
                  }

                 cout << endl; 
         
}


 // remember this 

// optimise loop uses via implementing number theory / algorithm
// optimise array elements calculation via number theory / algorithm

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
