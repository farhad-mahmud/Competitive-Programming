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

         vector<int > a(n+1); for(int i=1;i<=n;i++)cin >> a[i] ;


         map<int,int > mp ;

         int l = 0 ; 


         int cnt = 0 ;

         for(int i=1;i<=k;i++){
               if(mp[a[i]] == 0){
                     cnt++ ;
               }
               mp[a[i]]++ ;

         }



         vector<int > ans ;

         ans.push_back(cnt) ;

         
        // l = k ;


         for(int i=k+1;i<=n;i++){

               // we have to erase the leftmost elment.. 
               mp[a[i-k]]-- ;
               
               // zei left element ta sorabo.. oita jodi current window te na thake
               // tahole cur window er distinct element er count kombe..

               if(mp[a[i-k]] == 0){
                     cnt-- ;
               }
               
               if(mp[a[i]] == 0){
                   cnt++ ;
               }
               mp[a[i]]++ ;
            
              ans.push_back(cnt) ; 
         }


         for (auto x : ans){ 
            cout << x << ' ' ;
         }

         cout << nl; 
  
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
