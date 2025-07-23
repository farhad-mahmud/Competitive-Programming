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
             int n ; cin >>n ;

             vector<int > taste(n+1) , sugar(n+1) ;

             for(int i=1;i<=n;i++) cin >> taste[i] ;

             for(int i=1;i<=n;i++)  cin >> sugar[i] ;

             //int sum = 0 ;

            //sort(sugar.rsugaregin(),sugar.rend()) ;

            
            vector<pair<int ,int >> v ;

           int max_sat =0 ;



            for(int i=1;i<=n;i++){
                   int ans =0  ;

                 for(int j=1;j<=n;j++){

                         int sum =0 ;

                        if(sugar[i] >= sugar[j]){

                            sum = (taste[j] - sugar[i] );

                            if(taste[j] > 0){

                                 ans += taste[j] ;

                                 cerr << ans <<nl;
                            }
                        }
                 }

                   int sat = ans - sugar[i] ;

                   max_sat = max(max_sat , sat) ;
            } 


            if(max_sat <0){
                 cout << 0 << nl;
            }
            else {

                 cout << max_sat <<nl;
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
