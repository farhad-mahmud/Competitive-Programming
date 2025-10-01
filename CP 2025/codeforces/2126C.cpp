#include <bits/stdc++.h>
using namespace std;

#define int  long long

#define nl       "\n" 

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
// Constants
const int N = 1e5 + 9;
const int MOD = 1e9 + 7;

void solve ()
{
                  int n ,k ;cin >> n >> k ;

                  vector<int > a(n) ;

                  for(int i=0;i<n;i++){
                      cin >> a[i] ;
                  }
               
                 set<int > st ;

                 for(int i=0;i<n;i++){

                     if(a[i] >= a[k-1]){

                           st.insert(a[i]) ;
                     }
                 }

                 vector<int > v ;


                 for(auto i : st)  v.push_back(i) ;


                int water =0  ;

               for(auto i : v){
                    cerr << i << nl; 
               }

                int f = 1;
                
                int cur = a[k-1] ;
                int j =0 ;
               
                while(j< v.size()- 1){

                      int cur = v[j];
                      int nxt = v[j+1];

                      int t_need = nxt - cur ;
                      int t_left = cur - water ;

                      if(t_need <= t_left){

                           water += t_need;
                           j++ ;
                      }

                      else {
                           f = 0 ;
                           break ;
                      }

                }


               if(f){
                   yes ;
               }
               else {
                    no ;
               }
                
               
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
