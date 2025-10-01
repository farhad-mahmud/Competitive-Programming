#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const  int N =  1e8  ;

bitset<N> is_prime ;
void sieve ()
{
         is_prime[1] = false ; // cause 1 is not a prime number ;

         for(int i= 2 ;i< N ;i++){

               is_prime[i]  = true ;    // let rest of the number be prime 
         }

         for(int i=2 ;i*i < N ;i++){        // i*i , sieving till root 

                if(is_prime[i]){

                     for(int j= i+i ;j<N ;j +=i){

                             is_prime[j] = false ;
                     }
                }
         }
       
        
}




int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

 
            sieve() ;
   
      vector <int > primes ;
      
      for(int i=2 ;i<N ;i++){

           if(is_prime[i]){

                primes.push_back(i) ;       // storing all the primes in vector ;
           }
      }
  
      for(int i=0;i<primes.size();i += 100){

                  cout << primes[i] << endl; 
      }

    return 0;
}
