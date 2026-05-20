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
      int n ; cin >> n ;
      vector<int > a(n+1); for(int i=1;i<=n;i++)cin>> a[i] ;

      vector<bool> hash(n+1, false) ;
      for(int i=n;i>1;i--){
            int sum = (a[i] + a[i-1]);
            if(sum== 7 || a[i]== a[i-1]){
                 hash[i-1] = true ;
            }
      }  

     // cerr <<"h" << nl;
      int prev = 0 ;
      int cnt = 0 ;
      for(int i=1;i<n;i++){
            if(hash[i]){
              // cerr << i << nl; 
                 if(hash[i+1]){
                     a[i+1] = 6-a[i+1] ;
                     if(a[i+1]== prev){
                          a[i+1]+=1 ;
                     }
                     hash[i+1] = false ;
                 }
                 else{
                     a[i]= 6- a[i];
                     if(a[i] == prev){
                          a[i]+=1 ;
                     }
                     hash[i] = false ;
                 }
                 cnt++ ;
                 // hash[i] = false ;
            }
            prev = a[i] ;
      }


      cout << cnt << nl ;

    
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
