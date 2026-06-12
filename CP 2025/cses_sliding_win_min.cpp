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
         // cause sorted element 
         
         cerr << v[d.front()] << nl ;
         vector<int > minn ;

         minn.push_back(d.front()) ;


         for(int i=k+1;i<=n;i++){

               // i-k expired..

               // if (!d.empty() && d.front() <= i - k) {
               //      d.pop_front();
               //  }

               while(!d.empty() && v[d.back()] >= v[i]){
                    d.pop_back() ; 
               }

               d.push_back(i) ;

               minn.push_back(v[d.front()]) ;
         }


         for(auto x : minn){
               cout << x << nl ;

         }

         int ans = minn[0] ;

         for(int i=1;i<minn.size() ; i++){
               ans ^= minn[i] ;
         }


         cout <<ans << nl ;



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
