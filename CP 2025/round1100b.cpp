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

const int N = 100 ;
const int MOD = 1e9 + 7;


void solve ()
{  
            int n ; cin >> n ;

            vector<int > a(n); for(int i=0;i<n;i++)cin >> a[i] ;
            vector<int > b(n); for(int i=0;i<n;i++)cin >> b[i] ;


            int mxa = *max_element(all(a));
            int mxb = *max_element(all(b)) ;


           int sum1 = 0 ;

            

            for(int i=0;i<n;i++){

                sum1 += max(a[i], b[i]) ;


            } 

            vector<int > k(n) ;

            for(int i=0;i<n;i++){

                  int mn = min(a[i],b[i]);

                  k.push_back(mn) ;
            }

            int mx = *max_element(all(k)) ;


            cout << sum1 + mx << nl ;




   
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
