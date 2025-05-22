#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
#define vi       vector<int > 
#define  forr    for(auto &i : x) 
const int  MOD = 1e9 + 7;

const int N = 1e5 + 9 ;

int s[N] , freq[N] ;
void solve ()
{
              int n ; cin >> n ;


              for(int i=1;i<=n;i++){

                    cin >> s[i] ;

                    freq[s[i]]++ ; // freq of every element ;
              }
        
            int ans = 0 ;

           for(int g = 2 ;g <N ;g++){  

                int cnt = 0 ;
             
                for(int m = g ;m <N ;m += g){ // going through the multiples of g ;

                  cnt += freq[m] ; // finding the frequencies of g's multiples 
                                   // cause thats the number of elements that the gcd> 1 ;

                }

                ans = max(ans,cnt) ;

           }
         


          cout << max(ans ,1) << endl  ;

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
