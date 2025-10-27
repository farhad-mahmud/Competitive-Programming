//---  Bismillahir Rahmanir Rahim ---//

//------------------------------//
//        Author: Farhad       //
//------------------------------//

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


void solve ()
{
   int n ; cin >> n ;
   vector<int > a(n) ; for (int i = 0; i < n; i++)cin >> a[i] ;

   map<int , int >mp ;


   vector<int > pref ;

   for (int i = 1; i <= 32; i++) {

      pref.push_back((1LL << i)) ;
   }

   //output(pref) ;
   sort(a.rbegin() , a.rend()) ;

   //output(a) ;

   for (int i = 0; i < n; i++) {
      mp[a[i]]++ ;
   }

   int cnt = 0 ;

   reverse(pref.begin() , pref.end()) ;

   //output(pref) ;

   for (int i = 0; i < n; i++) {
      if (mp.find(a[i]) == mp.end()) {
         continue ;
      }
      for (int j = 0; j < 32 ; j++) {

         int k = pref[j] - a[i] ;

         if (mp.find(k) != mp.end()) {

            if (k == a[i]) {

               if (mp[k] > 1) {
                  cnt++ ;
                  mp[k] -= 2 ;
               }

               if (mp[k] <= 0) {
                  mp.erase(k) ;
               }

            }
            else {
               cnt++ ;
               mp[k]-- ;
               mp[a[i]]-- ;
               if (mp[k] <= 0) {
                  mp.erase(k) ;
               }
               if (mp[a[i]] <= 0) {
                  mp.erase(a[i]);
               }
            }
         }
      }
   }

   cout << cnt << nl ;

}

int32_t main() {
   ios_base:: sync_with_stdio(0);
   cin.tie(0);

   int t = 1 ;

   //cin >> t ;

   while (t--) {

      solve() ;

   }


   return 0;
}
