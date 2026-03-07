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


         if(n % 4 ==0){
                vector<int > a ;
                vector<int > b ;
                int sum1= 0 ;
                int sum2 = 0 ;
                
                int k = n / 4 ;

                for(int i=1;i<=k;i++){
                      a.push_back(i);
                }

                for(int i=n;i>n-k;i--){
                      a.push_back(i);
                }

                for(int i=k+1;i<=n-k;i++){
                      b.push_back(i);
                }
               // output(a);
               // output(b);
               
                yes;
                cout<<a.size() << nl;
                for(auto x : a){
                    cout << x << ' '  ;
                }
                cout << nl;
                cout << b.size() << nl;
                for(auto x : b){
                    cout << x << ' ' ;
                }

         }
         else {
            int sum = n*((n+1)/2);

               vector<int > a ;
                vector<int > b ;

                int t = sum /2 ;

                int sum1 = 0 ;
                int sum2 = 0 ;
                for(int i=n;i>=1;i--){
                     if(i <=t){
                         a.push_back(i);
                         sum1+= i ;
                         t-=i ;
                         //cerr << i << ' ' << t << nl;
                     }
                     else{
                         b.push_back(i);
                         sum2+= i ;
                     }
                }

                if(sum1== sum2){
                yes;
                cout<<a.size() << nl;
                for(auto x : a){
                    cout << x << ' '  ;
                }
                cout << nl;
                cout << b.size() << nl;
                for(auto x : b){
                    cout << x << ' ' ;
                }
             }else{

                 no ;

             }

          }
        
       

}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;

   //cin >> t ;

   while (t--) {

      solve() ;

   }


   return 0;
}
