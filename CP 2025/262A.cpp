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
        
                  int n , k ; cin >> n >> k ;

                  vector <int > a(n) ;


                  for(int i=0;i<n;i++){


                          cin >> a[i] ;
                  }


                  int rem = 0 ;

                  
                        int cnt2 = 0 ; 

                 for(int i=0;i<n;i++){

                     int cnt = 0 ;

                          int j = a[i] ;

                          while(j>0){

                                rem = j % 10 ;

                                if(rem == 4 || rem == 7){
                                  
                                     cnt++ ;
                                }

                                j = j/10 ;
                          }

                          
                          if(cnt <= k){

                               cnt2++ ;
                          }
                 }
        

                cout << cnt2 << endl; 
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
