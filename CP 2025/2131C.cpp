#include <bits/stdc++.h>
using namespace std;

#define ll  long long

#define nl       "\n" 

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
#define dbug(x) cerr << (#x) << " is " << (x) << nl;
#define output(a) for(auto &it: a) cerr<<it<<" "; cerr<<nl;
// Constants
const int N = 2e5 + 9;
const int MOD = 1e9 + 7;


void solve ()
{
                     int n , k ; cin >> n >> k ;

                     vector<int > s(n+1) ;
                     for(int i=1;i<=n;i++) cin >> s[i] ;

                     vector<int > t(n+1) ;
                    for(int i=1;i<=n;i++) cin >> t[i] ;

                   
                   map<int ,int > mp  ;

                  for(int i=1;i<=n;i++){

                       int x= 0 , y =0 ;

                       x = (s[i] % k +k) % k ;                   

                       y = ((k - s[i]) + k) % k ;

                       mp[x]++ ;
                       mp[y]++ ;
                  }


                  bool f = true ;

                 for(int i=1;i<=n;i++){

                     int tmp = (t[i] % k + k ) % k ;

                      if(mp[tmp] > 0){

                          mp[tmp]-- ;
                      }
                      else {

                          f = false ;
                          break ;
                      }
                 }


                  if(f){

                      yes ;
                  }
                  else {

                       no ;
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
