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
            int n , m , a , b ;
            cin >> n >> m >> a >> b;

            int up = m - (a*n) ;

            int dw = (b-a) ;

            int y = up/ dw;

            int x = n - y ;

            if(up % dw == 1){

                    no;
                    return ;
            }

            if(a*x + b*y == m && x + y == n && x>=0 && y >=0){

                   yes ;
            }

            else {

                   no ;
            }

}


 // remember this 

// optimise loop uses via implementing number theory / algorithm
// optimise array elements calculation via number theory / algorithm

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
