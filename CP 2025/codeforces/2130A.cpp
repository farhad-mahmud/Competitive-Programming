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
// Constants
const int N = 1e5 + 9;
const int MOD = 1e9 + 7;


void solve ()
{
                  int n ; cin >> n ;
               
                  vector<int >a(n+1) ;

                  int sum =0 ;

                  for(int i=1;i<=n;i++) {

                     cin >> a[i] ;
                     
                      if(a[i] !=0 && a[i] != 1){

                          sum+= a[i] ;
                      }
                  }


                  multiset <int > st ;
                  int sum2 = 0 ;

                  for(int i=1;i<=n;i++){

                       st.insert(a[i]) ;

                       sum2 += a[i] ;

                  }


                 int  count0 = st.count(0) ;
                 int  count1 = st.count(1) ;

                 if(count0 == 0){

                      cout << sum2 << nl;
                 }
                 else {

                      if(count1 == 0){

                         cout << count0 + sum << nl;
                      }
                      else {

                          int mn = min(count0 , count1) ;

                          int mx = (count0 + count1) - mn ;

                          cerr << mn << ' ' << mx << nl;

                          if(mn == mx){

                             cout <<  mn*2 + sum << nl ;
                          }
                          else{
                                 
                              cout << mn*2 + (mx - mn) + sum << nl;

                          }


                      }
                 }

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
