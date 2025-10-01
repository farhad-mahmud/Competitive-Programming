#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)


#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   x.begin(),x.end() 
const int  MOD = 1e9 + 7;



void solve ()
{
        
                          int n ; cin >> n ;

                          vector<int > h(n) ;

                          for(int i=0;i<n;i++){

                                 cin >> h[i] ;
                          }

                       
                          int ans = 0 ;

                          for(int i=0;i<n;i++){

                               int k = 1 ;

                               int j = i+1;

                               while(j<n && h[j] <= h[j-1]){

                                     k++;
                                     j++ ;
                               }

                                j = i-1;

                               while(j>= 0 && h[j] <= h[j+1]){

                                      k++;
                                      j--;

                                    
                               }

                                ans = max(ans ,k) ;
                          }


                          cout << ans << endl;


                         
            

}

int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

         //cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
