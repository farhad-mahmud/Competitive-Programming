#include <bits/stdc++.h>
using namespace std;

#define int  long long

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


void solve ()
{
                  int l , r ; cin >> l >> r ;

                  int a = 0 , b =0 , c = 0 ;
                  int ans =0  ;

                  for(int i =30 ;i>=0;i--){ 

                       int b1= 0 ;
                       int b2 =0 ;

                       if((l >> i) & 1){

                           b1 = 1;    // b1 is the ith set bit of l ;
                       }

                       if((r >> i) & 1){ 

                           b2 = 1 ;  
                       }

                       if(b1 ==b2)  // if both ith bit of l and r are same ;
                       {

                            ans += b1 * (1LL << i) ;  // add that bit to ans
                       }
                       else {  // if we find a different ith bit between l and r ;

                            a = ans + (1LL << i) ;

                            b = a- 1 ;
                            break ;
                       }
                  }


                  for(int i= l;i<=r;i++){

                        if(i != a && i !=b){

                             c = i ;
                             break ;
                        }
                  }

                  cout << a << ' ' << b << ' ' << c << nl; 
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
