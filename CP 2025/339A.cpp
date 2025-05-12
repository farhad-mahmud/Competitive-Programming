#include <bits/stdc++.h>

using namespace std;

#define ll  long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)


#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
#define vi       vector<int > 
#define  forr    for(auto &i : x) 
const int  MOD = 1e9 + 7;
const int N = 109 ;

int digits[N] ;
void solve ()
{
              string s ; cin >> s;

              int len = s.length() ;


              int digit_id = 0 ;

              for(int i=0;i<len ;i+=2){
          
                     digits[digit_id] = s[i] - '0' ;

                     digit_id++ ;
              }
      
             

            sort(digits , digits + digit_id) ;


           for(int i=0;i<digit_id;i++){

                  cout << digits[i] ; 

                  if(i < digit_id - 1){

                        cout << "+" ;
                  }
           }

            cout << endl; 


}


 // remember this 

// optimise loop uses via implementing number theory / algorithm
// optimise array elements calculation via number theory / algorithm

int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

       //  cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
