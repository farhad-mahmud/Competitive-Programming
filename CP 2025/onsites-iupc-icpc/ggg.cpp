#include <bits/stdc++.h>
using namespace std;

#define ll  long long

#define nl       "\n" 

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
#define dbug(x) cerr << (#x) << " is " << (x) << nl;
#define output(a) for(auto &it: a) cerr<<it<<" "; cerr<<nl;
// Constants
const int N = 2e5 + 9;
const int MOD = 1e9 + 7;


void solve ()
{
                int n ,k ,s ; cin >> n >> k >> s ;



                int dcb = 0 ;

                if(s<7){

                     dcb = s ;
                }
                else { 

                    int rm = s / 7 ;

                    dcb = s - rm ;
                }

              int mx_buy_choc = dcb*n ; // 144

              int need_choc = k*s ; // 20 


               //cerr << need_choc << nl ;
              // cerr << mx_buy_choc << nl;

               if(need_choc > mx_buy_choc){

                    cout << -1 << nl;
                    return ;
               }

            
             if(need_choc % n == 0){

                   cout << need_choc / n << nl;
             }
             else {

                  cout << (need_choc/n) + 1 << nl ;
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
