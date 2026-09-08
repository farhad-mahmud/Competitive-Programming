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

const int N = 1e6 + 5 ;

const int MOD = 1e9 + 7;

void solve ()
{  
            int k ; cin >> k ;

            vector<int > c(k+1) ; for(int i=1;i<=k;i++)cin >> c[i] ;



            if(k == 1){
                 if(c[1] >=3){
                    yes ;

                 }
                 else{
                     no ;
                 }
            }
            else{

                  int cnt =0 ;
                  bool f = false ;

                  for(int i=1;i<=k;i++){
                       if(c[i] >= 2){
                          cnt++ ;
                       }

                       if(c[i] >=3 ){
                           f = true ;
                       }
                  }

                  if(cnt >=2 || f){
                       yes ;
                  }
                  else{
                       no ;
                  }
            }




}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;

   cin >> t ;

   while (t--) {

      solve() ;

   }


   return 0;
}
