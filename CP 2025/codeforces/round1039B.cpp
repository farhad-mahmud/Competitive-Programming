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
                     int n ; cin >> n ;

                     vector<int > p(n+1) ;

                     for(int i=1;i<=n;i++) cin >> p[i] ; 
                                     

                    int l = 1, r = n ;

                 int i = 1 ;

                 vector<char > ans ;

                while(i<=n){

                      if(i % 2==1){

                           if(p[l]<p[r]){  

                               ans.push_back('L') ; // p[l] is small thats why we took L
                               l++ ;
                           }
                           else {

                                ans.push_back('R') ; // p[r] is small , thats why we took R ;

                                r-- ;
                           }
                      }
                      else{
                           
                           if(p[l] < p[r]){

                                ans.push_back('R') ; // p[r] is bigger thats why we took R ;
                                r-- ;
                           }
                           else {

                                 ans.push_back('L') ;
                                 l++ ;
                           }
                            
                      }

                      i++ ;
                }


                for(auto i : ans){

                     cout << i  ;
                }
                  
          cout << nl; 
             
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
