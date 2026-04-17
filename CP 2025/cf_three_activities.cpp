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

const int N = 1e9 + 9;
const int MOD = 1e9 + 7;


void solve ()
{  
            int n ; cin >> n ;

            
            vector<pair<int,int >> p1, p2, p3;

            vector<int > a(n), b(n), c(n);
            for(int i=0;i<n;i++){
               cin >> a[i];
               p1.push_back({a[i] , i });
            }
               for(int i=0;i<n;i++){
                  cin >> b[i];
                    p2.push_back({b[i] , i });
               }

                  for(int i=0;i<n;i++){
                     cin >> c[i];
                     p3.push_back({c[i] , i });
                  }



            sort(allr(p1));
            sort(allr(p2));
            sort(allr(p3));


            int fmax = 0 ;

           int i = 0 ;
           int sum = 0;


         for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            for(int k=0; k<3; k++) {
                if(p1[i].second != p2[j].second && p1[i].second != p3[k].second && p2[j].second != p3[k].second) {
                    fmax = max(fmax, p1[i].first + p2[j].first + p3[k].first);
                }
            }
        }
      }
            
           
      cout << fmax <<nl;
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
