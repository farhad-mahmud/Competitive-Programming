#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const int  MOD = 1e9 + 7;
void solve ()
{
               
                   int n ; cin >> n ;
          
           // by using bitwise operation 
                  
                  vector < int  > a(n) ;


                   for(int i=0;i<n;i++){

                             cin >> a[i] ;
                   }

                   int bits = 30 ; 

                     // cause max a[i] is 2^30 ;

                   vector <int > freq(bits , 0 ) ;

      // freq[j] = for how many numbers have the j-th bit set 

                   // loop to calculate how many numbers have 1's at each bit position 

                    for(int i = 0 ;i<n; i++){
                          
                          // loop from o to 29 bit 
                        for(int j = 0;j< bits ; j++){

                               if(a[i] & (1 << j)){

                                        freq[j]++ ;
                               }
                        }
                    }
          


            // step 2 , try each element of a[] as possible k , and calculate xor and sum

                   int maxi = 0 ;



                   for(int i=0 ;i<n ;i++){
                      int sum = 0 ;
                    
                      int k = a[i];

                       // this loop is for every bit 0 to 29
                      for(int j = 0;j<bits ;j++){

                          if(k & (1 << j)){
                             
                             // k has a 1 at this bit 
                           // it will flip to 1 in xor when paired with a[i] that has 0 

                             sum += (n- freq[j]) * (1LL << j) ;

                          }

                          else {

                            // in else , k has a 0 at this bit
                           // it will flip to 1 in xor when paired with a[i] that has 1 

                                 sum += freq[j] * (1LL << j) ;
                          }
                   }
  

                    maxi = max(maxi , sum) ;      
                 }



                     cout << maxi << endl ;


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
