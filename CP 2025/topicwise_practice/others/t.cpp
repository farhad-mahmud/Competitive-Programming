#include <bits/stdc++.h>
using namespace std;

#define ll  long long

#define nl       "\n" 

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define pii pair<int,int>
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

               
               map <int,int > mp ;

               int k = 2*n ;
               vector<int > a(k) ;


               for(int i=0;i<k;i++)
               {

                  cin >> a[i] ;

                  mp[a[i]]++;
               } 

               bool f = true ;

               for(auto i : mp){

                     if(i.second > 2){

                          f = false ;
                          break ;
                     }

               }
            
            if(f){

                 yes ;
            }
            else {
                 no  ;
            }



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
