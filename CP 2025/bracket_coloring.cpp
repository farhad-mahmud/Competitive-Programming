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


void solve ()
{  
         int n ; cin >> n ;
         string s; cin >> s ;

         int cnt1 = count(all(s) , '(');
         int cnt2 = count(all(s) , ')');

         if(cnt1 != cnt2){
              cout << -1 << nl;
              return ;
         }

         int rightneed =0 ;
         int leftneed = 0 ;

         int cnt = 0 ;
         bool f = true ; ;
         for(int i=0;i<n;i++){
               if(s[i] == '('){
                    cnt++;
               }
               else{
                    cnt--;
               }

               if(cnt <0){
                    f = false ;
                    break ;
               }
         }

         string s2 = s;
         reverse(all(s2));
         int cntt = 0;
         bool f2 = true ; ;
         for(int i=0;i<n;i++){
               if(s2[i] == '('){
                    cntt++;
               }
               else{
                    cntt--;
               }

               if(cntt <0){
                    f2 = false ;
                    break ;
               }
         }


        if(f || f2){
            cout << 1 << nl; 
           for(int i=0;i<n;i++){
              cout << 1 << ' ' ;
           }
           cout <<nl ;
           return ;
        }

      vector<int > v(n);

      int m = 0 ;
      int mn = 0 ;
      int st = 0 ;

      for(int i=0;i<n;i++){
           if(s[i] == '('){
              m++;
           }
           else{
              m--;
           }

           mn = min(mn, m);

           if(m == 0){
             int col = 0 ;
               if(mn >=0){
                   col = 1 ;
               }
               else{
                   col =2  ;
               }

               for(int j=st;j<=i;j++){
                    v[j] = col;
               }

               st = i+1 ;
               mn = 0 ;
           }

      }

      cout << 2 << nl;

      for(auto x : v){
           cout << x << ' ' ;
      }

      cout << nl ;
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
