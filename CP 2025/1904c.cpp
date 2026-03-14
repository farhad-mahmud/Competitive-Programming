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
       for(int i=0;i<n-1;i++){
            int df = abs(a[i] - a[i+1]);

            dif.push_back(df);
       }

       sort(all(dif));

       output(dif);
      
       if(dif.size() == 1){
            cout << dif[0] << nl;
            return ;
       }

       int ans1 = 0;
       if(k > 2){
        ans1= abs(dif[1] - dif[0]);
      }else{
          ans1 = dif[0];
      }

      for(int i=0;i<k;i++){
           c.push_back(dif[i]);
      }

      int mn2 = 1e18 ;
      //sort(all(c));
      int gc = 0 ;
      int min_dif = *min_element(all(c));
      cerr << min_dif << nl;
      for(int i=0;i<c.size();i++){

          int df = abs(min_dif - c[i]);
          
          if(c[i] != min_dif){
              gc = __gcd(gc,df );
          }
         
          // if(df < mn){
          //      mn = df ;
          // }
      }

     
       // int mn = 1e18 ;
       // //int gc = 0 ;
       // for(int i=0;i<n;i++){

       //    int df = abs(min_dif - a[i]);
          
       //    if(df < mn){
       //         mn = df ;
       //    }

       // }

       cerr << gc << nl;

       //cout << min(mn, ans1)  << nl; 

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
