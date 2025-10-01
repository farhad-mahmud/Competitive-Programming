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


int lcm(int a, int b) { return (a / __gcd(a, b)) * b; }

void solve ()
{
                  int x ; cin >> x ;
               
                  vector<int > v;

                  int z = x ;


                  while(x>0){

                        int rem = x % 10 ;
                        v.push_back(rem);

                        x /= 10 ;
                      
                  }


                  sort(v.begin(),v.end()) ;

                  cout << v[0] << nl; 

               
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
