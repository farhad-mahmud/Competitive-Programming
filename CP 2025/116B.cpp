#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)


#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
#define vi       vector<int > 
#define  forr    for(auto &i : x) 
const int  MOD = 1e9 + 7;



void solve ()
{
             int n ,m ; cin >> n >> m ;

             vector<vector<char >> grid(n,vector<char>(m)) ;

             for(int i=0;i<n;i++){

                   for(int j=0;j<m;j++){

                           cin>> grid[i][j] ;
                   }
             }


                  int cnt= 0;

                  cout << "h" << endl; 


                  int dx[] = {-1 , 1 , 0 , 0} ;

                  int dy[] = {0,0,-1,1} ;

            for(int i=0;i<n;i++){

                    for(int j=0;j<m;j++){

                            if(grid[i][j] == 'P'){
                                
                              for(int d = 0;i<4 ;d++){

                                    int ni = i + dx[d] ;

                                    int nj = j + dy[d] ;

                                    if(ni >= 0 && ni <n && nj>=0 && nj<m && grid[ni][nj] == 'W'){

                                         cnt++ ;

                                         grid[ni][nj] = '.' ;

                                         break;
                                    }
                              }
                    }
                 }
            }
 



                 cout << cnt << endl; 





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
