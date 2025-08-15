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

                   int l ; cin >> l ;// bulbs that are initially lit ;

                   set<ll > st ;
 
                   for(int i=1;i<=l;i++) {
                        
                          ll x ; cin >> x ;

                           st.insert(x) ;
                   }

                
                 vector<vector<ll>> at_lit ;


                 for(int i=0;i<n;i++){

                     int k ; cin >> k ;

                     vector<ll > elm(k) ;

                     for(int j=0;j<k;j++){

                           cin >> elm[j] ;
                     }

                     at_lit.push_back(elm) ;
                 }


                 int cnt = 0 ;


                for(auto &i : at_lit){

                     for(int v : i){

                         auto it = st.find(v) ;

                         if(it == st.end()){ // if not found

                              st.insert(v) ;
                         }
                         else {

                              st.erase(v) ;
                         }
                           
                     }


                     if(st.empty()){

                           cout << cnt + 1 << nl;
                           return ;
                     }

                     cnt++ ;   

                }

                 for(auto &i : at_lit){

                     for(int v : i){

                         auto it = st.find(v) ;

                         if(it == st.end()){ // if not found

                              st.insert(v) ;
                         }
                         else {

                              st.erase(v) ;
                         }
                           
                     }

                  

                     if(st.empty()){

                           cout << cnt + 1 << nl;
                           return ;
                     }

                     cnt++ ;   

                }

          

          
           cout << -1 << nl; 

}

int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

         //cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
