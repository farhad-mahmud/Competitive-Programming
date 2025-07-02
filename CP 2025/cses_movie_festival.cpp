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
                   
                   vector<int > a(n+1) , b(n+1) ;
                   vector<pair<int,int>> v ;


                   for(int i=1 ;i<=n;i++){

                        cin >> a[i] >> b[i] ;

                        v.push_back({a[i],b[i]}) ;
                   }


             sort(v.begin() ,v.end() , [] (pair <int ,int > x , pair<int,int> y){

                   return x.second < y.second ;
             }) ;


             int max_end = -1 , ans = 0 ;

             for(auto i : v){

                 if(i.first >= max_end){

                     max_end = i.second ;
                     ans++ ;
                 }
             }


            cout << ans << nl; 

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
