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

void solve ()
{

                     int n , x ; cin >> n >> x ;

                     vector<int> a(n+1) ;

                     for(int i=1 ;i<=n;i++){

                           cin >> a[i] ;
                     }

                     map <int,int > mp ;

                     vector<int > pref_sum(n+2) ;
                     pref_sum[0] = 0 ;

                    for(int i=1;i<=n;i++){

                        pref_sum[i] = pref_sum[i-1] + a[i] ;
                       

                    }

                    mp[0]++ ;
                    int cnt = 0 ;

                    for(int j=1;j<=n;j++){

                         cnt += mp[pref_sum[j] - x ] ;

                         mp[pref_sum[j]]++ ;

                         //cerr << pref_sum[j] <<  ' ' ;
                        // cerr << cnt << ' ' ;
                    }


                    cout << cnt << nl; 

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
