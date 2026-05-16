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
         int n ,t  ; cin >> n >> t ;


         vector<int > a(n); for(int i=0;i<n;i++)cin >> a[i];



         int i=0 , j = n-1 ;

         while(i <=j){
               if(a[i] + a[j] == t){
                    cout << i+1  << ' ' << j+1  << nl; 
                    return ;
               }
               else if(a[i] + a[j] < t){
                    i++ ;
               }
               else {
                    j-- ;
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
