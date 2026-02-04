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


void solve (int k)
{  
      int p ,l ; cin >> p >> l ;

      // c*q = p-l..
      //cout << "h" << nl;

      if((p-l)<= l){
          cout << "Case " << k << ": " << "impossible" << nl;
          return ;
      }

      int total_ate = (p-l) ;

      vector<int > v ;

      for(int c=1;c*c<=total_ate;c++){

           if((p-l) % c == 0){
               int q = (p-l)/c ;
               if(c > l){
               v.push_back(c) ;
                }
               if((p-l)/c != c && (p-l)/c > l){
                  v.push_back((p-l)/c) ;
               }
           } 

      }

      sort(all(v));
       cout << "Case " << k << ": " ;
      for(auto x : v){
           cout << x << ' ' ;
      }

      cout << nl;
     
}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;

    cin >> t ;
   int k = 1 ;
   while (t--) {

      solve(k) ;
      k++ ;
   }


   return 0;
}
