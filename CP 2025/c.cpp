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
         int n , k ; cin >> n >> k ;

         vector<int > a(n); for(int i=0;i<n;i++)cin >> a[i] ;


         vector<int> v;

         int cnt = 1;
         for(int i=1;i<n;i++){
              if(a[i]!=a[i-1]){
                    v.push_back(cnt);
                    cnt = 1;
              } else {
                    cnt++;
              }
         }

         v.push_back(cnt);

         sort(all(v));
         int m = v.size();


         if(n == 1){
              cout << 1 << nl ;

         }
         else if(k > n){
                  int left = k - n ;



                  if(left % m == 0){
                       cout << 1 << nl;
                  }
                  else{
                       cout << 0 << nl ;
                  }


         }
         else if(k == 1){
              cout << 1 << nl; 
         }
         else if(n >=k){

               int ans = 0, suf = n;
              for (int i = 0;i<m;i++) {
                  if (i == 0 || v[i -1]<v[i]) {
                      int rem = m - i, dif = k - suf;
                      if (dif % rem == 0 && v[i] + (dif/ rem) >= 1) ans++;
                  }
                  suf -= v[i];
              }

              cout << ans << nl;


         }


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
