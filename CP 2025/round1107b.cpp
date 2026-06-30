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
const int MOD = 1e9 + 7;

vector<int > pre ;

void build(int v, int d1, int d2) {
    if (v >1e9) return;
    if (v >0) pre.push_back(v);
    
    if (v >0 || d1 > 0) build(v*10 + d1,d1,d2);
    if (v >0 || d2 > 0) build(v*10 + d2,d1,d2);
}
void precmp(){

       for (int i = 0;i <= 9; i++) {
        for (int j = i;j <= 9; j++) {
            build(0, i, j);
        }
      }
      sort(all(pre)) ;

      pre.erase(unique(all(pre)), pre.end()) ;

}
bool f(int n){
    int mask = 0;
    int cnt = 0;

    while (n > 0) {
        int d = n % 10;
        if ((mask &(1 << d)) == 0) {
            cnt++;
            mask |=(1 << d);
        }
        if(cnt > 2) return false;
        n/= 10;
    }
    return true;
}
void solve ()
{     
            int x ; cin >> x ;

            for(int i =0 ;i<pre.size() ;i++){

                  if(pre[i] < 2 )continue ;

                 if(f(x*pre[i])){
                     cout << pre[i] << nl ;
                     break ;
                 }
            }

       
}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;

   cin >> t ;
   precmp() ;
   while (t--) {

      solve() ;

   }


   return 0;
}
