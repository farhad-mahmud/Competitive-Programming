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
            
            string s , s2 ;
             
            cin >> s >> s2 ;

            int n = s.length() ;  // s
            int m = s2.length() ; // t 

            map <char ,int > cnt_s , cnt_s2 ;

            
          
            for(int i=0;i<n;i++){         // freq of s;
                  
                    cnt_s[s[i]]++ ;
            }



            for(int i=0;i<m;i++){        // freq of s2 ;
 
                    cnt_s2[s2[i]]++;
            }
             
             
          
            int ans = 0;

           for(int i='a';i <= 'z';i++){

                    if(cnt_s2[i] > 0){

                       if(cnt_s[i] == 0){   // if the character of s2 is not found in s

                              cout << -1 << endl;
                              return ;
                       }
                    

                    else {

                            ans += min(cnt_s2[i] , cnt_s[i]) ;
                    }
                 }
           }
           
           
             cout << ans << endl; 

}


 // remember this 

// optimise loop uses via implementing number theory / algorithm
// optimise array elements calculation via number theory / algorithm

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
