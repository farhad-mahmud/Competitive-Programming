#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)


#define yes cout << "YES\n";
#define no cout << "NO\n";
#define allr(x)  x.rbegin(),x.rend() 
#define all(x)   x.begin(),x.end() 
const int  MOD = 1e9 + 7;



void solve ()
{
        
                    int d ; cin >> d;

                    int n ; cin >> n;

                    vector<int > a(n) ;

                    for(int i=0;i<n;i++){

                          cin >>a[i] ;
                    }


               int turn = 0 ;

              
               for(int i=1;i<n;i++){

                    
                     turn += (d - (a[i-1] + 1)) + 1 ;

                   
                   // cout << "dbug a[i-1] :" << a[i-1] << endl ;
                    // cout << "dbug a[i] :" << a[i] << endl; 

                       
                     
               }


               cout << turn << endl; 


}



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
