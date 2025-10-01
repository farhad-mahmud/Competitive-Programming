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
        
                int n , m ;  cin >> n >> m ;

              
                int cnt = 0;

                int x = m ;

          
     for (int i = 1; i <= n; i++) {

        if (i % 2 == 1) {
           
            for (int j = 1; j <= m; j++) cout << "#";

        } else {

            cnt++;

            if (cnt % 2 == 1) {
              
                for (int j = 1; j < m; j++) cout << ".";

                cout << "#";

            }

             else {
              
                cout << "#";

                for (int j = 2; j <= m; j++) cout << ".";

            }
        }

          cout << endl; 
    }


}




int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

       //  cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
