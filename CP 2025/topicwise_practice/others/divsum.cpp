#include<bits/stdc++.h>
using namespace std; 

const int N = 5e5 + 9 ;
long long  sum[N] ;

   
int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

                  
          for(int  i = 1 ;i<N ;i++){

              for(int j = i ;j<N ;j +=i) {


                         sum[j] += i ; 
              }
          }


   
          
                     
  
      int t ; cin >> t ;

    while (t--) {

             int  n ; cin >> n ;

             cout << sum[n] -  n << endl; 


    }

    return 0;
}
 