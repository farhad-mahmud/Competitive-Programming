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


void solve ()
{
                 int n ; cin >> n ;
                 vector<int > a(n+1) ;

                 for(int i=1;i<=n;i++) cin >> a[i] ;

                 int cnt0 = count(all(a) ,0) ;

                if(cnt0 == n) { no ; return ;}

                map <int , int > mp ;

                int f= 0 ;

                int k = 0 ;

                for(int i=1;i<=n;i++){

                      mp[a[i]]++ ;

                      if(a[i] == -1){

                          f = 1 ;
                      }
                      if(a[i] == 0){

                           k = 1;
                      }

                }

                if(k){ 
                   no ;
                   return ;
                 }

                if(f){  // if -1 ;

                      if(mp.size() > 2){

                            no ;
                      }
                      else{

                           yes ;
                      }
                }
                else {

                        if(mp.size() == 1){
                             yes ;
                        }
                        else {
                            no ;
                        }
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
