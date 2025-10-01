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

void solve ()
{
          
            int n , k ; cin >> n >> k ;

            vector<int > a(n+1) ;
      
            int cnt1 = 0  , cnt0 = 0 ;

            for(int i=1;i<=n;i++){
                 cin >> a[i] ;

                 if(a[i] == 1){
                    cnt1++ ;
                 }
                 if(a[i]== 0){
                    cnt0++ ;
                 }
            }

            if(cnt0 == 0){

                 cout << 0 << nl; 
                 return ;
            }

            
   
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
