#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 9 ;
int a[N];

int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

     int n ; cin >> n; 

     for(int i=0;i<n;i++){

     	     cin >> a[i] ;
     }

     sort(a+1 , a+n+1) ;

     int ans = 0 ;

     for(int i=1 ;i<=n;i++){

     	  for(int j =i+1 ;j<=n;j++){ 

                ans += (a[j] - a[i]) * (1 << (j-i-1)) ;  // 2^(j-i-1) ;
     	   }
     }

   
     cout << ans << endl; 

    return 0;
}
