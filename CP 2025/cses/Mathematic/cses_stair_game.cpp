#include<bits/stdc++.h>
using namespace std ;
#define int long long
#define nl  "\n"
void solve(){
        int n ; cin >> n ;

        vector<int > a(n) ; for(int i=0;i<n;i++) cin >> a[i] ;

        int ans = 0 ;

        for(int i=0;i<n;i++){

             if(i & 1){

               ans ^= a[i] ;
             }
        }
        if(ans == 0){

            cout <<"second" << nl;
        }
        else {

              cout <<"first" << nl;
        }
}
int32_t main(){
    ios:: sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t ;

    while(t--){

         solve() ;
    }
}
