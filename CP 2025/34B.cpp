#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)


#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   (x.begin(),x.end()) ;
const int  MOD = 1e9 + 7;

void solve ()
{
             
                int n , m ;  cin >> n >> m ;

                vector<int > a(n) ;

                for(int i=0;i<n;i++){

                        cin >> a[i];

                }

                
                int sum = 0 ;

                sort(a.begin(),a.end()) ;

                for(int i =0 ;i<n;i++){

                        if(a[i] < 0 && m >0){

                           sum = sum + (-a[i]) ;

                           m-- ;
                        }

                }


                cout << sum << endl; 
              
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
