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


void solve ()
{

                     int n ; cin >> n ;

                     vector<int > a(n+1 ) ;

                     for(int i=1;i<=n;i++){ 
                         
                         cin >> a[i] ;
                     }
             
                  
                    int total_pos = 0 ;
                    int total_neg = 0 ;

                    int pref_neg = 0 ;

                    int even = 1;
                    int odd = 0 ;

                    for(int i=1;i<=n;i++){

                          if(a[i] < 0){
                               pref_neg++;
                          }

                          if(pref_neg % 2 == 0){
                             //even numbers of negatives so far - positive prefix 

                                 total_pos += even ;
                                 total_neg += odd ;

                                 even++ ;
                          }
                          else {
                                // odd numbers of negatives so far- negative prefix 
                                total_pos += odd ;
                                total_neg += even ;

                                odd++ ;

                          }
                    }


                    cout << total_neg <<  ' ' << total_pos << endl; 

}


 // remember this 

// optimise loop uses via implementing number theory / algorithm
// optimise array elements calculation via number theory / algorithm

int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

        // cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
