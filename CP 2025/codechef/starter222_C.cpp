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
         int n , m ; cin >> n >> m ;

         vector<int >a(n);for(int i=0;i<n;i++)cin >> a[i];
         vector<int >b(m);for(int i=0;i<m;i++)cin >> b[i];

         int cnt = 0 ;
             for(int i=0;i<n;i++){
                 for(int j=0;j<b.size();j++){
                     if(a[i] > b[j]){
                          cnt++ ;
                          //b.erase(b.begin() + j);
                     } 
                     
                 }
             }

             cout << cnt << nl; 
         

         

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
