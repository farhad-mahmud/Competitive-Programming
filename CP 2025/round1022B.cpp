#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   (x.begin(),x.end()) ;
const int  MOD = 1e9 + 7;
void solve ()
{
        
            int n ; cin >> n ;

            vector<int > arr(n+3 , -1) ;
             
             int k ;

          

             for(int i = 1, j= 0; i<=n ;i++){

                     cin >> k ;

                     if(k != arr[j]){         // removes consequetive duplicants 


                             arr[++j] = k ;
                     }
             }
           


              

              
             int cnt = 0 ;

             for(int i= 1; i<=n ;i++){

                    if(arr[i] > arr[i-1] &&  arr[i] > arr[i+1])

                    {

                                cnt++ ;
                    }
             }


              cout << max(cnt ,1LL) << endl; 

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
