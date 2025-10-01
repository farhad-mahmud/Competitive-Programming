#include <bits/stdc++.h>
using namespace std;

#define int  long long

#define nl       "\n" 

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
// Constants
const int N = 1e7 + 9;
const int MOD = 1e9 + 7;

 
bitset<N> is_prime ;

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

   }


// loop through prime 
void solve (int k ,vector<int > &primes)
{
                    
                     int n ; cin >> n ;

                     int ans = 0 ;

                     for(int a : primes){

                           if(a>n) break ;

                           int b= n-a ;

                           if(is_prime[b] and a<=b){

                                ans++ ;
                           }
                     }

                      cout << "Case " << k << ": " << ans << nl; 
}


int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

         cin >> t ;

         sieve() ;

                      vector<int> primes ;

                     for(int i =1 ;i < N ;i++){

                           if(is_prime[i]){

                                 primes.push_back(i) ;
                           }
                     }
          
         int k = 1 ;




         while(t--){

            solve(k,primes) ;
              
             k++ ;
        }


    return 0;
}
