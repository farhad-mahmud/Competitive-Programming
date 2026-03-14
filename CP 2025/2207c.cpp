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
      int n , h ; cin >> n >> h ;

      vector<int > a(n); for(int i=0;i<n;i++)cin >> a[i];

      vector<int > up ;

      for(int i=0;i<n;i++){
            int k = h - a[i];
            //cerr << h << ' ' << a[i] << nl;
            up.push_back(k);
      }

      output(up);

      vector<int > drain ;
      for(int i=0;i<n;i++){

            int cst =0  ;
            cst+= up[i];
            // right side cost
            int prevmax = a[i];
            int prevcost = up[i];
           for(int j=i+1;j<n;j++){
               if(a[j] > prevmax){

                     cst += up[j];
                     prevmax = a[j];
                     prevcost = up[j];
               }
               else{
                    cst+= prevcost;
               }
           }

           if(i==3){
              cerr << cst << nl;
           }
           //left side cost.
            prevmax = a[i] ;
            prevcost = up[i];
            for(int j=i-1;j>=0;j--){
                  if(a[j] > prevmax){
                       cst+= up[j];
                       prevmax = a[j];
                       prevcost = up[j];
                  }
                  else{
                       cst += prevcost;
                  }
            }

            if(i== 3){
               cerr << cst << nl;
            }
           drain.push_back(cst);
      }

      // so drain is the vector where I store, if I choose the ith tile..in column wise
      // as drain , how many tiles i can drain ? 
      // so now the question is among these which two indices drain I should select 
      // and also if I select one, how much it effects other ? 
      for(auto x : drain){
           cout << x << nl ;
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
