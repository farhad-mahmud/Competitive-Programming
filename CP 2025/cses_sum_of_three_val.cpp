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
                 int n , x ; cin >> n >> x ;

                 vector<pair<int,int >> a(n) ;

                 for(int i= 0; i<n ;i++){

                        cin >> a[i].first;

                        a[i].second = i+1 ;

                 }
     
              sort(a.begin(),a.end()) ;

              for(int i=0;i<n-2;i++){

                  int t = x- a[i].first ;
                //  dbug(t);
                  int l=i+1 , r= n-1;

                  while(l<r){

                      int sum = a[l].first + a[r].first ;
                    //  dbug(sum) ;

                      if(sum == t){

                          cout << a[i].second << ' '<< a[l].second << ' ' << a[r].second << nl;
                          return ;
                      }
                      else if(sum< t){

                          l++;
                      }
                      else {
                         r-- ;
                      }
                  }
              }

              cout <<"IMPOSSIBLE" << nl; 
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
