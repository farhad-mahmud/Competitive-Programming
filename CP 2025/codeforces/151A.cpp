#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)


#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   x.begin(),x.end() 
const int  MOD = 1e9 + 7;



void solve ()
{
           
                 int n,k,l,c,lime_slice,p,nl,np ;

                 cin >> n >> k >> l >> c >> lime_slice >> p >> nl >> np;


                 int whole_drink = (k*l) ;
                
                 int toast = (whole_drink / nl) ;



                 int whole_limes = (c*lime_slice) ;

                 int need_salt = (p / np) ;

                   
               //    cout << toast << " " << whole_limes <<" " <<  need_salt << endl;

                 int mi = min(toast , min(whole_limes,need_salt)) ;


                 cout <<  mi / n << endl;

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
