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
                    int a , b ;

                    cin >> a >> b ;

                    int c = (a+b) ;


                    string s1 = to_string(a) ;

                    string s2 = to_string(b) ;
                     
                     string s3 = to_string(c) ;

                   s1.erase(remove(s1.begin(),s1.end(), '0'),s1.end()) ;
                   s2.erase(remove(s2.begin(),s2.end(),'0'),s2.end()) ;
                     s3.erase(remove(s3.begin(),s3.end(),'0'),s3.end()) ;
                   
                   int a1 = stoi(s1) ;

                   int b1 = stoi(s2) ;

                   int c1 = stoi(s3) ;


                   if(a1 + b1 == c1){

                          yes ;
                   }
                   else{

                        no ;
                   }


                    
                  
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
