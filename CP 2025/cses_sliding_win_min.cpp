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

const int N = 100 ;
const int MOD = 1e9 + 7;


void solve ()
{  
         int n , k ; cin >> n >> k ;

         int x,a,b,c ; cin >> x >> a >> b >> c ;

         vector<int > v(n+1);

         v[1] = x ;

         for(int i=2;i<=n;i++){
              v[i] = (a*(v[i-1]) + b ) % c ;

         }

         deque <int > d ;

         for(int i=1;i<=k;i++){
              d.push_back(i) ;
         }

         //sliding window..

         cout << d.front() << nl ;
         // cause sorted element 
         for(int i=k+1;i<=n;i++){

               // i-k expired..

               d.pop_front(i-k) ;

               int in = d.back() ;
 
               if(v[in] >= v[i]){

                  d.pop_back() ;
                  
               }


         }

}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;

   //cin >> t ;

   while (t--) {

      solve() ;

   }


   return 0;
}
