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
         int n ,x , y ; cin >> n >> x >> y ;

         vector<int > a(n+1); for(int i=1;i<=n;i++)cin >> a[i];


         int st = x ;
         int en = y ;

         if(st ==0 && en ==n){
               //cyclic shift .. 

             int sz = en - st ;
             //cerr <<sz << nl; 

             vector<int > v ;
                 int in = 0 ;
              int mn =1e18;
              for(int i= st+1 ;i<=en;i++){
                     if(a[i] < mn){
                          mn = a[i] ;
                          in = i ;
                     }
              }

              // cerr << "in " << in << nl;
              // cerr << en << nl ; 
              for(int i=in;i<=en;i++){
                    v.push_back(a[i]);
              }

              for(int i=st+1;i<in;i++){
                    v.push_back(a[i]) ;
              }

              for(auto x : v){
                  cout << x << ' ' ;
              }
              cout << nl; 
         }
         else {

            // cerr << en-1 << ' ' <<  st << nl ;
             int sz = en - st ;
             //cerr <<sz << nl; 

             vector<int > v ;
                 int in = 0 ;
              int mn =1e18;
              for(int i= st+1 ;i<=en;i++){
                     if(a[i] < mn){
                          mn = a[i] ;
                          in = i ;
                     }
              }

               // cerr << "in " << in << nl;
               // cerr << en << nl ; 
               if(in > 0){
              for(int i=in;i<=en;i++){
                    v.push_back(a[i]);
              }

              for(int i=st+1;i<in;i++){
                    v.push_back(a[i]) ;
              }
             }
             else{
                     v.push_back(a[st+1]) ;
             }
               
               //output(v) ;           
               int mx = 0 ;
               int mx_in = 0 ;
               vector<int > rest ;
               for(int i=1;i<=st;i++){
                       rest.push_back(a[i]) ;
                      // cerr << a[i] << nl; 
               }
               for(int i=en+1;i<=n;i++){
                        rest.push_back(a[i]) ;
                     //  cerr << a[i] << nl;
               }

               //output(rest) ;
               int j = 0 ;
               int ind = 0;
               int f = 0 ;
               for(auto x: rest){
                  if(x < mn){
                       cout << x << ' ' ;
                  }
                  else{
                       if(!f){
                           for(auto vv : v) cout << vv << ' ';
                           f = 1 ;
                       }
                       cout << x << ' ' ;
                  }
            }

            if(!f) {
               for(auto vv : v) cout << vv << ' ';
            }

            cout << nl ;

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
