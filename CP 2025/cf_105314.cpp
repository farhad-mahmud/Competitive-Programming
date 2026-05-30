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
         int n ; cin>> n ;
 
         vector<int > a(n) ;for(int i=0;i<n;i++)cin >> a[i];
 
 
         int l = 0 ;
 
         vector<int > freq(n+1) ;
        

         set<int > st ;

         for(int i=0;i<n;i++){
              st.insert(a[i]) ;
         }

         int target = st.size() ;

         int cnt = 0 ;

         int ans = 1e9 ;
         for(int r = 0 ;r<n ;r++){

               if(freq[a[r]] == 0){
                    cnt++ ;
               }
               freq[a[r]]++ ;


               while(cnt == target){

                     ans = min(ans , r-l + 1) ;
                     freq[a[l]]-- ;

                     if(freq[a[l]] == 0){
                           cnt-- ;
                     }

                     l++ ;
               }
   
 
         }  
 
 
         cout << ans << nl; 


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
