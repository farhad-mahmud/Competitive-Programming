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
          int n ; cin >> n ;

          char c ; cin >> c ;

          string s ; cin >> s ;

          int first_g = 0 ;


          vector<int > v ;

          if(c =='g' || n == 1){
               cout << 0 << nl ;
               return ;
          }

          for(int i=0;i<n;i++){
               if(s[i] == 'g' && first_g == 0){
                     first_g = i+1 ;
                    
               }

               if(s[i] == 'g'){
                    v.push_back(i+1) ;
               }
          }

          // output(v) ;
          // cerr << first_g << nl;


          vector<int > dis ;
          int sz = v.size() ;


          for(int i=0;i<n;i++){

               if(s[i] == c){

                  // cerr << 1 << nl ;
                   bool f = false ;
                   for(int j=0;j<sz; j++){


                        if(v[j] > i+1 ){
                            int d = v[j] - (i+1 );
                           
                            f = true ;

                            dis.push_back(d) ;

                            break ;

                        }

                   }

                    if(!f){  // r er right e kono g nei.

                            int d = (n-(i+1)) + first_g ;

                            dis.push_back(d) ;
                     }
               }
          }


          //output(dis) ;

          int mx = *max_element(all(dis)) ;


          cout << mx << nl ;


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
