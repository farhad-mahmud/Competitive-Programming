#include <bits/stdc++.h>
using namespace std;

#define int  long long

#define nl       "\n" 

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define pii pair<int,int>
#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
#define dbug(x) cerr << (#x) << " is " << (x) << nl;
#define output(a) for(auto &it: a) cerr<<it<<" "; cerr<<nl;
// Constants
const int N = 1e5 + 9;
const int MOD = 1e9 + 7;


void solve ()
{
                 
               int n ; cin >>n ;

              vector<pair<int , string>> v ;

              vector<string > s(n) ;

              for(int i=0;i<n;i++){

                  cin >> s[i] ;

                  v.push_back({i+1 , s[i]}) ;
              }   


              int x ; cin >> x ;

              string y ; cin >> y ;



              for(auto i : v){

                  if(i.first == x && i.second == y){

                         cout << "Yes" << nl;
                         return ;
                  }

              }


              cout << "No" << nl ;




}

int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

         //cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
