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
         string x ; cin >> x ;

         string t = "" ;

         for(int i=0;i<n;i++){
                int j = i+1 ;
                if( j % 2 == 1){
                    t += 'a' ;
                }
                else {
                    t += 'b' ;
                }
         }

         // cout << t << nl;

         if(n % 2 == 1){
              if(x[0] == 'b'){
                  no ;
                  return ;
              }
         }

         map<int,int > mp ;
         for(auto i : x){
               mp[x]++ ;
         }

         if(n % 2 == 0){

               int needa = n/2 ;
               int needb = n/2 ;
               for(int i=0;i<n-2;i++){
                     j = i +1 ;
                     if(j % 2 == 1){
                         if(x[i] == 'b'){
                              no ;
                              return ;
                        }
                        else if(x[i] == '?'){
                              // a lagbe..
                             if(needa > mp[a]){
                                 x[i] = 'a' ;
                                 mp[a]++ ;
                             }
                             else if(needa < mp[a]){
                                no ;
                                return ;
                             }
                        }

                      }
                      else {

                          if(x[i]== 'a'){
                             no ;
                             return ;
                          }
                          else if(x[i] == '?'){
                             // b lagbe..
                            if(needb > mp[b]){
                                 x[i] = 'b' ;
                                 mp[b]++ ;
                             }
                             else if (needb < mp[b]){

                                  no ;
                                  return ;
                             }

                          }
                      }
               }

               // for last two strings.. they can be ab or ba..
                string l = x[n-1]+ x[n-2] ;

                if(l == 'ab' || l == 'ba'){
                      yes ;
                }
                else {
                     if(x[n-1] == '?' && x[n-2] == '?'){
                           if(needa > mp[a] && needb > mp[b]){
                                 yes ;
                           }
                           else {
                                no ;
                           }
                     }
                     else if(x[n-1] == '?'){
                           
                     }
                }

         }
         else {
                   int needa = (n/2)+ 1;
                  int needb = n- (needa) ;

                for(int i=0;i<n-2;i++){
                     j = i +1 ;
                     if(j % 2 == 1){
                         if(x[i] == 'b'){
                              no ;
                              return ;
                        }
                        else if(x[i] == '?'){
                              // a lagbe..
                             if(needa > mp[a]){
                                 x[i] = 'a' ;
                                 mp[a]++ ;
                             }
                             else if(needa < mp[a]){
                                no ;
                                return ;
                             }
                        }

                      }
                      else {

                          if(x[i]== 'a'){
                             no ;
                             return ;
                          }
                          else if(x[i] == '?'){
                             // b lagbe..
                            if(needb > mp[b]){
                                 x[i] = 'b' ;
                                 mp[b]++ ;
                             }
                             else if (needb < mp[b]){

                                  no ;
                                  return ;
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

   cin >> t ;

   while (t--) {

      solve() ;

   }


   return 0;
}
