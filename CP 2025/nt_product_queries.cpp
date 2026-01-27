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
const int MAX = 1e9 ; 

void solve ()
{           
      int n ; cin >> n ;

       vector<int > hash(n+1 , -1);
      vector<int > a(n);
      for(int i=0;i<n;i++){
      cin >> a[i];
       hash[a[i]] =1  ;
     }

      for(int i=1;i<=n;i++){
           int mn = MAX ;
           if(hash[i] == 1)continue ;
           int k = sqrt(i);
           for(int j= k ;j>1;j--){
               if(hash[j] == -1)continue ;

               int y = i / j ;
               if(hash[y] == -1)continue ;

               if(i == y*j){
                    mn = min(mn ,hash[y]+ hash[j]);
               }
           }   

           if(mn != MAX){
                hash[i] = mn ;
           }
      }

      for(int i=1;i<=n;i++){
           cout << hash[i] << ' ' ;
      }

      cout << nl ;
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
