#include <bits/stdc++.h>

using namespace std;

#define int  long long

#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "yes\n";
#define no cout << "no\n";
#define all(x)   (x.begin(),x.end()) ;
const int  MOD = 1e9 + 7;
void solve ()
{
        
                      int n ; cin >> n ;

                      vector <int > a(n);

                      for(int i=0;i<n;i++){


                              cin >> a[i] ;
                      }

                      vector <int > v ;

                      int cnt = 0 ;

                   for(int i=0;i<n-1;i++){

                          if(a[i] > a[i+1]){

                                  v.push_back(i+1);

                                  cnt++ ;

                          }
                          else{

                                  break ;
                             
                          }

                   }

                
                 //  cout << v.size() << endl; 

                 //  cout << "cnt : " << cnt << endl; 

                  int l = 0, r = 0 ;

                  

                   if(cnt >0){

                    l = v[0] ;

                    r = cnt+1 ;
                  }
                  else 
                  {

                         yes ;
                       cout << 1 << " " << 1  ;
                      return ;
                  }
                 
                 // cout << "l :" << l << " " <<  "r :" << r << endl; 
                 
                   if(r == n){

                               yes ;

                              cout << l <<" " <<  r ;
                              return ;
                   }
                   else if (a[l-1] > a[r]){

                             no ;
                             return ;
                   }
                   else {

                           yes ;
                            
                          cout << l << " " << r ;
                          return ;
                   }
                  
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
