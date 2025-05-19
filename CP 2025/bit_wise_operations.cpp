#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
#define vi       vector<int > 
#define  forr    for(auto &i : x) 
const int  MOD = 1e9 + 7;
int check_kth_bit(int x ,int k) {

       return(x >> k) & 1 ;
}

int print_on_bits(int x){

      for(int k=0;k<32 ;k++){ 

             if(check_kth_bit(x,k)){

                  cout << k << ' ' ;  // print setbit/onbit ;
             }

       }
}

int print_off_bits(int x){

      for(int k=0;k<32 ;k++){ 

             if(!check_kth_bit(x,k)){

                  cout << k << ' ' ;  // print setbit/onbit ;
             }

       }
}

bool is_even(int x){

      if(x & 1){  // just check if last bit is on/off
           
            return false ;
      }
      else {

            return true ;
      }
}

void solve ()
{
               int y =3 ;
             //left shift
              cout << (y << 3) << endl; 

              //one left shift = 3*2 = 6 
              // 2 left shift = 6*2  = 12


           // for finding 2^20 ;

              int f = 1 << 20 ;

              cout << f << endl; 
               
             //right shift 

              cout << (10 >> 1) << endl;

             // one right shift = 10/2 (floor value);
              //20 , 2 right shift = 20/2 , 10/2  = 5 , 

           // 1LL is for typecast;  

              // bit on/off  
              // check if 3rd bit of a number is on or off
           
         cout << check_kth_bit(11,2) << endl;

         // print the set bits of a number ;
         // out of 32 bits 

         print_on_bits(11) ; 

         // print offbits 
         
         cout << endl; 

         print_off_bits(11) ;

         cout << endl; 

         // even /odd
         
         cout << is_even(10) << endl;

}


 // remember this 

// optimise loop uses via implementing number theory / algorithm
// optimise array elements calculation via number theory / algorithm

int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

         //cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
