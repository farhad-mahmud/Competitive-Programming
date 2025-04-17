#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const int  MOD = 1e9 + 7;
void solve ()
{
        
                 
           int n , m ;   cin >> n >> m ;

             
           int max_people = n- (m-1) ;

           int kmax =  max_people * (max_people - 1)/ 2 ;     

           int min_people = n/m ;

           int extra = n % m ;

           int  kmin = (m- extra) * (min_people * (min_people - 1)/2) + extra * (( min_people + 1) * min_people/2) ;


            cout << kmin << " " << kmax << endl; 

}




int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

      //   cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
