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
                int n ; cin >> n ;

                vector<int> a(n+1) , b(n+1) ;

                for(int i=1;i<=n;i++){
                    cin >> a[i]  ;
                }
                for(int i=1;i<=n;i++){
                     cin >> b[i] ;
                }

                vector<pair<int,int >> v  ;

               int k = 0 ;

               for(int i=1;i<=n;i++){

                    if(a[i] > b[i]){

                        swap(a[i],b[i]) ;
                        k++ ;

                        v.push_back({3,i}) ;
                    }
               }


             for(int i=1;i<=n-1;i++){

               for(int j=1;j<=n-1;j++){

                    if(a[j] > a[j+1]){

                        k++ ;
                        swap(a[j] , a[j+1]);

                        v.push_back({1,j}) ;
                    }

                    if(b[j] > b[j+1]){

                         k++ ;
                         swap(b[j],b[j+1]) ;

                         v.push_back({2,j}) ;
                    }

                 }
              }


               cout << k << nl; 

               for(auto i : v){

                   cout << i.first << ' ' << i.second << nl;
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
