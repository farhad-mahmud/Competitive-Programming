#include <bits/stdc++.h>

using namespace std;

#define int long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)


#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   x.begin(),x.end() 
const int  MOD = 1e9 + 7;



void solve ()
{
        
              int n ; cin >> n ;

              vector<int > x(n) ;
              vector<int > y(n) ;

              unordered_map<int ,int > h_jersey_freq;


              for(int i=0;i<n;i++){

                   cin >> x[i] ;

                   cin >> y[i] ;

                  h_jersey_freq[x[i]]++ ;
              }

         


              for(int i=0;i<n;i++){

                  int ini_homes = n-1 ;

         
                   int extra_homes = h_jersey_freq[y[i]];

                   int home = ini_homes + extra_homes ;

                    //  cout << "home : " << home <<  endl; 

                     int away = (2*(n-1)) - home ; 


                     cout << home << " " << away << endl; 
              }




}




int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

     //    cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
