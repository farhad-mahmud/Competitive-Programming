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
                              
                            vector<int > finish(n+1) ;
                            vector<int > d_line(n+1) ;
                           
                            vector<pair<int,int>> p ;

                            for(int i=1 ;i<=n;i++){

                                   cin >> finish[i] >> d_line[i] ;
                                   p.push_back({finish[i] ,d_line[i]}) ;


                            }

                            sort(p.begin() ,p.end() , [] (pair <int ,int> x , pair<int,int>y){

                                 return x.first < y.first ;
                            }) ;



                            int new_start = 0 ;

                            int finish_time = 0 ;
                            int ans = 0;

                           for(auto i : p){
               
                                 finish_time = new_start + i.first ;

                                 ans += (i.second - finish_time) ;

                                 new_start += i.first ;
                           }
                      

                           cout << ans << nl;                     

       
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
