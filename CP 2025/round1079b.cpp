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
      vector<int> p(n); for(int i=0;i<n;i++)cin >> p[i];
      vector<int > a(n); for(int i=0;i<n;i++)cin>> a[i] ;
      map<int,int > hash ;
      for(auto x : a){
            hash[x]++ ;
      }

      bool f = true  ;
      int power = 0 ;
      int wpower = 0 ;
      for(int i=0;i<n;i++){
           if(p[i] == a[i]){
                hash[a[i]]--;
           }
           if(p[i]!= a[i]){
              if(hash[p[i]] == 0){

                  if(hash[a[i]] == 1){
                     if(i==0){
                        if(p[i+1] != a[i]){
                              f = false ;
                              break ;
                        }
                        else{
                            hash[a[i]]-- ;
                        }
                     }else if(i==n-1){
                         if(p[i-1] != a[i]){
                            f = false ;
                            break ;
                         }else{
                            hash[a[i]]--;
                         }
                        }
                     else {
                          if(p[i+1] != a[i] && p[i-1] != a[i]){
                                 f = false ;
                                 break ;
                          }else{
                             hash[a[i]]-- ;
                          }
                     }

                      
                  }
                  else if(hash[a[i]] >1){
                        hash[a[i]]-- ;
                        power = hash[a[i]];
                        wpower = a[i] ;

                  }
                     }//

                 else if(hash[p[i]]>0){
                      if(i==0){
                         f= false ;
                         break ;
                      }
                      else{
                         if(p[i-1]!= a[i]){
                             f = false ;
                             break ;
                         }
                         else{
                             hash[a[i]]--;
                         }
                      }
                 }
              }
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
