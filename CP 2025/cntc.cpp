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

const int N = 100 ;
const int MOD = 1e9 + 7;


void solve ()
{  
    // here n = 2 

     int a, n ; cin >> a >> n ;
     int aa = a;

     vector<int > d(n) ;

     for(int i=0;i<n;i++)cin >> d[i] ;

      int ans = 1e18 ;
   
     vector<int > v ;
  
     if(a == 0) {
         v.push_back(0);
     } else {
         while(a>0){
                int dd = a % 10 ;

                a/=10 ;

                v.push_back(dd) ;
         }
         reverse(v.begin(), v.end());
     }
     a = aa;

    // 

     //lowerdig..
     int len = v.size() ;
      
      if(len > 1){
        int b = 0;
        for (int i = 0; i < len - 1; ++i) {
            b = b * 10 + d.back();
        }
        int dif = abs(a - b);
        ans = min(ans, dif) ;

     }
     else if(len ==1){
         int dif = abs(a- d.front()) ;
         ans = min(ans, dif) ;

         dif = abs(a- d.back()) ;

         ans = min(ans, dif) ;
     }

        // upper dig
        int b = 0 ;
         
        if(d.front() == 0){
            b = d.back();
            for(int i=0;i<len;i++){
                 b = b*10 + d.front() ;
            }
        }
        else {
              for(int i=0;i<=len ;i++){
                  b = b*10 + d.front() ;
              }
        }

        int dif = abs(a - b);
        ans = min(ans, dif) ;

        int pre = 0 ;

        bool f = true ;

        for(int i=0;i<len;i++){
            if(!f) {
                break ;
            }

            for(int nm : d){
                  if(nm < v[i]){

                      int b = pre*10 + nm ;

                  for (int j = i + 1; j < len; ++j) {
                    b = b * 10 + d.back();
                     }
                 int dif = abs(a - b);
                   ans = min(ans, dif) ;


                  }

                  else if(nm > v[i]){

                  int b = pre * 10 + nm;
                for (int j = i + 1; j < len; ++j) {
                    b = b * 10 + d.front();
                }
                int dif = abs(a - b);
                  ans = min(ans , dif) ;

                  }
            }


            if (find(d.begin(), d.end(), v[i]) != d.end()) {
               pre = pre * 10 + v[i] ;
               } 
               else {
              f = false;
             }
        }


        if(f){

             int dif = abs(a - pre) ;

            ans = min(ans, dif) ;
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