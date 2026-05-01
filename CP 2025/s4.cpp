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

bool f(int n){

     if(n == 0) return true  ;

     set<int > st ;

     int tmp = n ;

     while(tmp > 0){
         int d = tmp % 10 ;

         if(st.count(d))return false ;

         st.insert(d);

         tmp/= 10 ;

     }

     return true ;
}
void solve ()
{  
            
           int l , h ; cin >> l >> h ;

           int cnt = 0 ;
           for(int i=l;i <=h;i++){

               if(f(i)){
                   cnt++ ;
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
