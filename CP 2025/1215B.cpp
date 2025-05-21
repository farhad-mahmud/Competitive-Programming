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

                    int cnt_even = 1;
                    int cnt_odd = 0 ;

                    for(int i=1;i<=n;i++){

                          if(a[i] < 0){
                               pref_neg++;
                          }

                          if(pref_neg % 2 == 0){
                           

                                 total_pos += cnt_even ; 
                                 total_neg += cnt_odd ;   
 
                                 cnt_even++ ;
                          }
                          else {
                               
                                total_pos += cnt_odd ;
                                total_neg += cnt_even ; 
                                cnt_odd++ ;

                          }
                    }
                    cout << total_neg <<  ' ' << total_pos << endl; 

}



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
