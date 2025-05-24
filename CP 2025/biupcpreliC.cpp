#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()

const int  MOD = 1e9 + 7;


void solve ()
{
                 
                 int n , k ; cin >> n >> k ;

                 vector<int> a(n) ; 
                 vector<int > b(n) ;  

                 for(int i=0;i<n;i++){

                       cin >> a[i];
                 }

                 for(int i=0;i<n;i++){

                       cin >> b[i] ;
                 }

  

                 vector<int > mx ;


                 int dif = 0 ;

                 for(int i=0;i<n;i++){ 

                       
                       dif = (b[i] - a[i]) ;

                       mx.push_back(dif) ;

                   }


                   sort(mx.rbegin(),mx.rend()) ;


                   int sum = 0 ;

                   for(int i=0;i<k;i++){ 
                        

                           sum += mx[i] ;

                           //cout << mx[i] << endl; 
                     }

                         
                   cout << sum << endl; 

}


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
