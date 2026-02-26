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
         int n;  cin >>  n;

         vector<int > a(n+1) ;for(int i=1;i<=n;i++)cin >> a[i] ;

         bool f = false ;

         for(int i=1;i<n-1;i++){
        if(a[i] > a[i-1] && a[i] > a[i+1]){
                  f = true ;
          }
         }

        if(!f){
           cout << 0 << nl ;
           return ;
        }


         int l = 0 , r = 0 ;
         for(int i=1;i<=n;i++){
          if(a[i] == n || a[i] == n-1){
            l = i;
            break;
             }
          }

          for(int i=n;i>=1;i--){
        if(a[i] == n || a[i] == n-1){
            r = i;
            break;
        }
          }

          int cst = 0 ;

          cst += (l - 1) + (n - r);

        vector<int> v;
       for(int i=l;i<=r;i++) v.push_back(a[i]);
       int m = v.size();

       deque<int> dq(v.begin(), v.end());

       cerr << cst << nl; 

      for(int i=1; i<dq.size()-1; ){
         if(dq[i] > dq[i-1] && dq[i] > dq[i+1]){
      
        int d_l = i-1 ;
        int d_r = dq.size() - 1 - i;

        if(d_l <= d_r){
            cst += 1; 
            int tmp = dq[i];
            dq.erase(dq.begin() + i);
            dq.push_front(tmp);
        } else {
            cst += 1; 
            int tmp = dq[i];
            dq.erase(dq.begin() + i);
            dq.push_back(tmp);
        }
      
         } else {
        i++; 
      }
      }


      cout << cst << nl; 

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
