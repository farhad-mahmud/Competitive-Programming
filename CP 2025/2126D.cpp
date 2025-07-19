#include <bits/stdc++.h>
using namespace std;

#define int  long long

#define nl       "\n" 

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
// Constants
const int N = 1e5 + 9;
const int MOD = 1e9 + 7;

void solve ()
{
                 int n , k ; cin >> n >> k ;

                 vector<int > l(n+1), r(n+1), real(n+1) ;
                 vector<tuple<int ,int ,int >> v ; 

                 for(int i=1;i<=n;i++){
                     cin >> l[i] >> r[i] >> real[i] ;
                     v.push_back({l[i],r[i],real[i]}) ;
                 }



              sort(v.begin(), v.end(), [](auto &a, auto &b) {
           return get<1>(a) < get<1>(b); 
          });
            
              


             //for(auto &t : v){

                 //cerr << get<0>(t) <<' ' << get<1>(t) << ' '<< get<2>(t)  << nl;
            // }

             int ans = -1 ;

         

          for (int i = 0; i < n; i++) {
             int l = get<0>(v[i]);
             int r = get<1>(v[i]);
           int real = get<2>(v[i]);
 
              if(real <=k){
                 continue ;
              }

              if(l<= k){
                  k = real ;
              }

           }
          

          cout << max(ans,k) <<nl; 


    
}

int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

         cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
