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
       int n,k ; cin >> n >> k ;

       vector<int > a(n); for(int i=0;i<n;i++)cin >> a[i];
       vector<int > c = a ;
       sort(all(a));
       //output(a);
       vector<int > dif ;

         for(int i = 0; i < n; i++){
          for(int j = i+1; j < n; j++){
          dif.push_back(abs(a[i] - a[j]));
         }
         }

       sort(all(dif));

       //output(dif);  
       int min_dif = dif[0];

       if(k==1){
          cout << min(min_dif, a[0]) << nl;
          return ;
       }

       //if k >=2 ,, 2 way..

       int mn = a[0] ;
       int sz = dif.size();
      for(int i = 0; i < sz; i++){

         auto it = lower_bound(all(a), dif[i]);

          if(it != a.end()){
             mn = min(mn, abs(*it - dif[i]));
         }

         if(it != a.begin()){
           it--;
            mn = min(mn, abs(*it - dif[i]));
         }
   }
       
       //cerr << mn << nl ;
      if(k > 2){
        cout << 0 << nl;
      }
      else{
      cout << min(mn, min_dif) << nl ;
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
