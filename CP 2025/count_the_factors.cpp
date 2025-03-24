#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const int N = 1e6 + 9 ;




int spf[N] ;


int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);
     

      for(int i=2 ;i< N ;i++){

             spf[i] = i ;    


      }

      for(int i = 2 ;i< N ;i++){

                 if(spf[i] == i ){

                      for(int j = i ;j<N ;j += i){

                            spf[j]  = min(spf[j] , i) ;   
                      }
                 }
      }

        int x ;
       while(cin >>x  && x!=0){
          int save_x = x ; int distinct_prime_factors = 0 ;

                 while(x > 1){
                    
                       int p= spf[x] ;
                       distinct_prime_factors++ ;

                       while(x % p ==0){

                                  x /= p  ;
                       }

                      
                 }

                 cout << save_x << " : " << distinct_prime_factors << endl; 
      }

    return 0;
}
