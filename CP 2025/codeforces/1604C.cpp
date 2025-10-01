#include <bits/stdc++.h>
using namespace std;

#define ll  long long

#define nl       "\n" 

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
#define dbug(x) cerr << (#x) << " is " << (x) << nl;
#define output(a) for(auto &it: a) cerr<<it<<" "; cerr<<nl;
// Constants
const int N = 1e5 + 9;
const int MOD = 1e9 + 7;

int lcm(int a, int b) { return (a / __gcd(a, b)) * b; }

void solve ()
{
             int n ; cin >> n ;

             vector<int > a(n+1) ;

             for(int i=1;i<=n;i++) cin >> a[i] ;


            bool f = true ;
             
            int k = 2 ; // k is 2 initally cause , for first element a[1]
              // we have to check wether its divisible by i+1 = 1+1 = 2 ,
             //so setting k= 2, our first lcm become lcm(2,1+1) = 2 , 


            for(ll i =1 ;i<=n;i++){

                 k = lcm(k,i+1);

                 if(a[i] % k == 0){

                      f = false ;
                      break ;
                 }

            }

            if(f) { yes ;}

            else { no ;}
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
