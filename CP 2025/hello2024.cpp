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
         int n ; cin >>n ;
         vector<int > a(n); for(int i=0;i<n;i++)cin >> a[i];


         map<int,int >mp ;

         vector<int > order ;
         for(int i=0;i<n-1;i++){
            if(a[i] < a[i+1]){ 
               if(mp.find(a[i+1]) == mp.end()){
                  order.push_back(a[i+1]); 
               }
             mp[a[i+1]]++;
            }
         }

         vector<pair <int ,int >> v ;
         int total =0  ;
        for(auto [e, x] : mp){
               v.push_back({x ,e}) ;
               total += x;
        }

        sort(allr(v));
        //cerr<< total << nl;

        int ch = 0 ;
        int cst = 0 ;
        for(auto [e,v] : v){
            // cerr << e << ' ' << v << nl ;
             ch = v ;
             cst = e ;
             break ;
         } 

         int f =0 ;
         for(int i=n-1;i>0;i--){
              if(a[i] == ch){
                 break ;
              }
              else if(a[i] > a[i-1]){
                     f = 1 ;
                     break ;
              }
         }

         if(!f){
              cout << total - cst << nl;
         }
         else{
              cout << total - cst -1  << nl;
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
