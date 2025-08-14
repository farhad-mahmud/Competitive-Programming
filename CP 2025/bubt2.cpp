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

                   vector<int > lit(l+1) ;


                   set<int > st ;
 
                   for(int i=1;i<=l;i++) {
                        
                           cin >> lit[i] ;

                           st.insert(lit[i]) ;
                   }

                   output(st) ;


                   int cnt = 0;
            

                  while(n--){

                        int k ; cin >> k ;

                        vector<int > lit_at(k+1) ;

                        for(int i=1;i<=k;i++){

                           cin  >> lit_at[i] ;

                        }

                        for(int i=1;i<=k;i++){

                              auto it = st.find(lit_at[i]) ;

                             if(it == st.end()){

                                  st.insert(lit_at[i]) ;
                             }
                             else{

                                 st.erase(lit_at[i]) ;
                             }

                        }

                          if(st.empty()){

                              cout << cnt << nl ;
                             return ;
                             
                           }
                                  

                        for(int i=1;i<=k;i++){

                              auto it = st.find(lit_at[i]) ;

                             if(it == st.end()){

                                  st.insert(lit_at[i]) ;
                             }
                             else{

                                 st.erase(lit_at[i]) ;
                             }

                        }
                      
                          cnt++ ;

                        if(st.empty()){

                              cout << cnt << nl ;
                             return ;
                        }


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
