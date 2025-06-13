#include <bits/stdc++.h>
using namespace std;

#define int  long long

#define nl       "\n" 

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
// Constants
const int N = 1e4 + 9;
const int MOD = 1e9 + 7;

bool is_prime[N] ;

vector<int >primes ;

void sieve() {

      is_prime[1] = false ;

      for(int i =2 ;i<N ;i++){

             is_prime[i] = true ;
      }


      for(int i =2 ;i*i < N;i++){

            if(is_prime[i]){

                  for(int j= i*i; j<N;j+=i){

                       is_prime[j] = false ;
                  }
            }
      }


      for(int i =2 ;i< N ;i++){

            if(is_prime[i]){

                 primes.push_back(i) ;
            }
      }

   }


int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

      sieve() ;

      int t , cs = 0 ; cin >> t ;

      while(t--){ 

               int m , n ; cin >> m >> n;

               int ans = 1e9 ;

               for(int p : primes){             // loop through primes ;

                   if(p > m) break ;

                   if(m % p ==0){   // if a prime (x) divides , m 
                                     // then in below loop we count 
                                     // the frequency of that prime (x) ; 
                       int e = 0 ;
                       while(m % p == 0){

                          m /= p ;
                          e++ ;

                       }
                   

                   int p_in_n_fact = 0 ;

                   for(int i =1 ;i<=n ;i++){  // loop through elements of n! ;

                          int x = i ;

                          while( x % p == 0){

                             p_in_n_fact++ ;

                             x /= p ;
                          }
                   }
               
                  ans = min(ans , p_in_n_fact / e) ;
                     
               }
            }

               if(ans == 0 ){

                     cout <<"Case " << ++cs << ":"<< nl <<  "Impossible to divide" << nl; 
               }
               else {

               cout << "Case " << ++cs << ":" << nl << ans  << nl; 

                } 
       }

 // time complexity nlog^2 ; 
       

    return 0;
}
