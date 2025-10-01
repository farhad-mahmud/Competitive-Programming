#include <bits/stdc++.h>
using namespace std;

#define int  long long

#define nl       "\n" 

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
#define dbug(x) cerr << (#x) << " is " << (x) << nl;
#define output(a) for(auto &it: a) cerr<<it<<" "; cerr<<nl;
// Constants
const int N = 1e5 + 9;
const int MOD = 1e9 + 7;



void solve ()
{
              int a , b , k ; cin >> a >> b >> k ;

  
               vector<int > divs ;

                int g = __gcd(a,b) ;
#include <bits/stdc++.h>
using namespace std;

#define int  long long

#define nl       "\n" 

#define yes cout << "YES\n";
#define no cout << "NO\n";

#define all(x)   x.begin(),x.end() 
#define allr(x)  x.rbegin() ,x.rend()
#define dbug(x) cerr << (#x) << " is " << (x) << nl;
#define output(a) for(auto &it: a) cerr<<it<<" "; cerr<<nl;
// Constants
const int N = 1e5 + 9;
const int MOD = 1e9 + 7;


void solve ()
{
              string s  ; cin >> s ;

              int len = s.length() ;

              string  t, f , n , els ;


              for(int i=0;i<len;i++){
                  
                    if(s[i] == 'T'){
                         
                          t+= s[i] ;
                    }

                    else if(s[i] == 'F'){

                          f+= s[i] ;
                    }
                    else if(s[i] == 'N' ){

                          n+= s[i] ;
                    }
                    else {
                         els += s[i] ;
                    }

              }

              cout << t<< f << n << els << nl; ;
}

int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

         cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}

                bool f = false ;

               for(int i=1;i*i <=g;i++){

                  if(g % i == 0){
                        
                       int dx1 = a/i , dy1 = b/ i;

                       if(dx1 <=k && dy1 <=k){
                          f= true ;
                          break ;
                       }

                       int j = g/ i ;

                       if(i != j){

                          int dx2 = a/j , dy2 = b/ j ;

                          if(dx2 <=k && dy2 <=k){

                                f = true ;
                                break ;
                          }
                       }
                    }
                  }
    
             if(f){
                  cout << 1 << nl;
             }
             else {

                 cout << 2 << nl;
             }
                  


           
}


int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

         int t = 1 ;

         cin >> t ;

         while(t--){

            solve() ;
        
        }


    return 0;
}
