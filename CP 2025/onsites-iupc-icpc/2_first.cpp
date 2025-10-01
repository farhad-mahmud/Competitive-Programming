#include <bits/stdc++.h>
using namespace std;

#define ll  long long

#define nl       "\n" 

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
#define dbug(x) cerr << (#x) << " is " << (x) << nl;
#define output(a) for(auto &it: a) cerr<<it<<" "; cerr<<nl;
// Constants
const int N = 1e5 + 9;
const int MOD = 1e9 + 7;


void solve ()
{
             int n , m ; cin >> n >> m ;

             string s ; cin >> s ;

             string b ; 

             while(m--) {

                 b+= s ;
                 //m--;
             }
            
          //  cerr << b << nl;
           int len = b.length() ;

           vector<int > v;

           for(int i=0;i<len;i++){

                int tmp = b[i] - '0' ;

                v.push_back(tmp) ;
           }

           int x = v.size() ;

           vector<int > pref(x), suf(x) ;

           pref[0] = v[0] ;


           for(int i=1;i<x;i++){

               pref[i] = pref[i-1] + v[i] ;
           }

          suf[x-1] = v[x-1] ;

          for(int i=x-2;i>=0;i--){

                suf[i] = suf[i+1] + v[i] ;
          }


          //cerr << pref[0] << ' ' << suf[x-1] << nl; 

          int cnt = 0 ;

         // output(v) ;


          for(int i=0;i<x;i++){

               if(i==0){

                    if(v[0] == suf[i+1]){

                       cnt++ ;
                    }
               }

               else if(i==x-1){

                     if(pref[i] == 0){
                          cnt++ ;
                     }                  
               }
               else {
      
                    if(pref[i] == suf[i+1]){
                        cnt++ ;
                    }
               }
          }

          cout << cnt << nl ;

           
}

int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

         cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
