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

int n ;
vector<int > a ;
vector<int > c ;
bool f(int k){

      // int dif = 0 ;

      int mn = *min_element(all(a));
      int mx = *max_element(all(a)) ;

      for(int i=0;i<n;i++){
           if(a[i]!= c[i]){
             if((a[i] - mn)<k && mx-a[i] <k){
                  return false ;
             }
           }
      }

      return true ;
}

void solve ()
{  
      cin >> n ;
      a.resize(n) ;
      for(int i=0;i<n;i++)cin >> a[i] ;

      c.resize(n) ;
      // output(a);
      c= a ;
      // output(c);
      sort(c.begin(),c.end());
      if(a== c){
           cout << -1 << nl;
           return ;
      }

     int l = 1 ;
     int r = *max_element(all(a)) - *min_element(all(a));

     int ans = 0 ;
     while(l<=r){
        int mid = (l+r)/2 ;

        if(f(mid)){
            l = mid+1 ;
            ans = mid ;
        }
        else {
            r = mid -1 ;
        }
     }


     cout << ans << nl;


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
