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
        int n ; cin >> n ;

        vector<int > a(n); for(int i=0;i<n;i++)cin >> a[i];

        map<int,int > mp;

        for(int i=0;i<n;i++){
            mp[a[i]]++ ;
        }   

        vector<int > left(n), mid(n) ;

        int sum1 = 0 , sum2 = 0 ;
        for(int i=0;i<n;i++){
    
         if(a[i] == 1){
            sum1+= 1 ;
         }else{
            sum1 +=-1 ;
         }
         
         left[i]  = sum1 ;


        }
       
       for(int i=0;i<n;i++){
    
         if(a[i] == 3){
            sum2+= -1 ;
         }else{
            sum2 += 1 ;
         }
         mid[i] = sum2 ;

        }

        vector<int > suf_max(n) ;
        suf_max[n-2] = mid[n-2] ;

      for(int i=n-3;i>=0 ;i--){
         suf_max[i] = max(suf_max[i+1] , mid[i]) ;
      }


      for(int i=0;i<=n-3;i++){
            if(left[i] >= 0 && suf_max[i+1] >= mid[i]){
                  yes ;
                  return ;
            }
      }

      no ;


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
