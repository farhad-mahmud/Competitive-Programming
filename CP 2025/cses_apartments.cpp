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

                      int n , m , k ; cin >> n >> m >> k ;

                      vector<int > a(n+1) ;

                      multiset<int > st ;

                      for(int i=1 ;i<=n;i++){
                            cin >> a[i] ;

                      }

                      vector<int > b(n+1);

                      for(int i=1 ;i<=m;i++){
                            cin >> b[i] ;
                            st.insert(b[i]) ;
                      }

                      int i =1 ,cnt =0 ;

                      sort(a.begin() , a.end()) ;


                      while(n--){

                           int x = a[i]- k ; 
                           int y = a[i] + k ;

                         //  cerr << x << ' ' << y << nl;

                           auto it = st.lower_bound(x) ;

                           if(it!= st.end() && *it <= y){

                                cnt++ ;
                                st.erase(it) ;
                           }
                       
                         i++ ;
                           
                      }

                      cout << cnt << nl; 
}

int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

        // cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
