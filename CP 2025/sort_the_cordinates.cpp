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

double dist(int x ,int y){

     return sqrt(x*x + y*y) ; 
}
void solve ()
{
      
          int n ; cin >>  n;

          vector<pair<double , pair <int,int>>> p ;    // double pair ;

          for(int i=0;i<n;i++){

               int x, y ; cin >> x >> y ;

               p.push_back(make_pair(dist(x,y), make_pair(x,y))) ;
          }
       

         sort(p.begin(),p.end()) ;

         // will be sorted lexographily ;

         for(auto i : p){

              cout << i.second.first << ' ' << i.second.second << " distance : " << i.first << nl; 
         }

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
