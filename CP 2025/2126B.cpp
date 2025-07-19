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


          
          int cnt = 0 ;

          int i = 1;

        while (i <= n) {

               if (a[i] == 0) {
                   bool ok = true ;
                   int len =0 ;
               
                for (int j = i; j < i + k && j <= n; j++) {
                   if (a[j] == 1) {
                    ok = false;
                    i = j + 1 ;
                    break;
               }
               len++ ;
             }

           if (ok && len == k) {
              cnt++;
              i = i + k + 1; 

             }
            else if (ok){

                i = i + len ;

            }

        }
        else {

             i++ ;
        }

          cerr << i << nl;

        }


        cout << cnt << nl ;
   
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
