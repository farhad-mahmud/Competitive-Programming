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
          
              int n , k ; cin >> n >> k ;

              vector<int > a(n+1) ;

              for(int i=1;i<=n;i++) cin >> a[i] ;


              set <int > st ;

             for(int i=1;i<=n;i++){

                  st.insert(a[i])  ;
             }

             int mex = 0 ;

             while(st.find(mex)!=st.end()) mex++ ;
             
             a[0] = mex ;

             auto get = [&](long long k){

                  return a[k % (n+1)] ; 
             };


             for(int i=1;i<=n;i++){

                  cout << get(1LL*n *k +i ) << ' ' ;
             }
        
           cout << nl; 
  

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
