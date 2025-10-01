#include <bits/stdc++.h>
using namespace std;

#define ll  long long

#define nl       "\n" 

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
// Constants
const int N = 2e5 + 5;
const int MOD = 1e9 + 7;

int pos[N] ;

int bad(int x,int n){

      if(x<1 || x>=n) return 0 ;

      return pos[x] > pos[x+1] ;
}

void solve ()
{
               int n , m ; cin >> n >> m ;

               vector<int > a(n+1) ;

               for(int i=1;i<=n;i++){

                      cin >> a[i] ;
                      pos[a[i]] = i ;
               }


               int cnt =1 ;

               for(int i=1;i<n;i++){

                    if(pos[i]>pos[i+1]) cnt++ ;
               }


               while(m--){

                   int x , y ;
                   cin >> x >> y ;

                   int u = a[x] ;
                   int v = a[y] ;

                  set<int > st ;

                  for(int i =-1;i<=1;i++){

                        int j = u+i ;
                      if(j >=1 && j <n){
                          st.insert(j) ;
                      }

                        j = v+ i ;

                        if(j>=1 && j<n){
                            st.insert(j);
                        }

                  }

                  for(auto i : st){

                      cnt -= bad(i, n);
                  }
             

                swap(a[x],a[y]) ;
                swap(pos[u],pos[v]) ;

                for(auto i : st){

                      cnt += bad(i,n) ;
                }
              
                cout << cnt << nl; 

               }
            






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
