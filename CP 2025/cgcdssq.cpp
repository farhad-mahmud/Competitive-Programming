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

unordered_map<int, int> cnt;
unordered_map<int, long long> pairs;

void mobius(){
 // compute pairs divisible by d ..

         for (auto &p : cnt) {
         int d = p.first;
         long long k = p.second;
          pairs[d] = k * (k - 1) / 2;  
         }

         vector<int > div ;

         for(auto i : cnt){
                div.push_back(i.first) ;
         }
         sort(div.rbegin() , div.rend());

      for (int d : div) {
        for (int m : div) {
            if (m > d && m % d == 0) {
                pairs[d] -= pairs[m];
            }
        }
    }


}

void solve ()
{  
      int n ; cin >> n ;
      vector<int > a(n); for(int i=0;i<n;i++)cin >> a[i] ;

      int q ; cin >> q ;

      while(q--){
           int x ; cin >>x ;
           // first we find number that is divided by x ..

           vector<int > b ;
           cnt.clear() ;
           pairs.clear() ;

           for(int i=0;i<n;i++){
                if(a[i] % x == 0){
                     b.push_back(a[i] / x) ;
                }
           }

           int sz = b.size() ;
           for(int i=0;i<sz; i++){
                for(int d=1;d*d<=b[i];d++){
                     if(b[i] % d == 0){
                         cnt[d]++ ;

                         if(d != b[i]/d){
                            cnt[b[i]/d]++ ;
                         }
                     }
                }
           }
           map<int,int > mp ;

           for(int i=0;i<n;i++){
                mp[a[i]]++ ;
           }

           mobius() ;

           cout << pairs[1] + mp[x] << nl; 

      }
}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;

   // cin >> t ;
   while (t--) {

      solve() ;

   }


   return 0;
}
