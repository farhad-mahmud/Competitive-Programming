//---  Bismillahir Rahmanir Rahim ---//


#include <bits/stdc++.h>
using namespace std;

#define int  long long

#define nl       "\n"

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define all(x)   x.begin(),x.end()
#define allr(x)  x.rbegin() ,x.rend()
#define dbug(x) cerr << (#x) << " is " << (x) << nl;
#define output(a) for(auto &it: a) cerr<<it<<" "; cerr<<nl;

// constrains

const int N = 1e5 + 9;
const int MOD = 1e9 + 7;


void solve ()
{  

  if(n % 2 == 0){
                  int mid = n / 2 ;

                  for(int i=1;i<=mid;i++){
                        if(a[i] != i){

                             int j = 2*i ;
                             if(a[j]!= i){
                                 no ;
                                 return ;
                             }
                        }
                  }
                     yes ;
         }
         else{
                int mid = n/2 ;
                bool f = true ;
                for(int i=1;i<=mid;i++){
                     if(a[i] != i){
                           int j = 2*i ;

                           if(a[j]!= i){
                                 no ;
                                 return ;
                           }
                     }
                }

                  yes ;
         }
    
}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;

   // cin >> t ;

   while (t--) {

      solve() ;

   }


   return 0;
}
